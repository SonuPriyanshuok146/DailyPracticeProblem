#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int> par(n+1,1);
        vector<vector<int>> children(n+1);
        for(int i=2;i<=n;i++){
            scanf("%d",&par[i]);
            children[par[i]].push_back(i);
        }
        vector<int> depth(n+1,0);
        for(int i=2;i<=n;i++) depth[i]=depth[par[i]]+1;
        int LOG=1;
        while((1<<LOG) < n+1) LOG++;
        vector<vector<int>> up(LOG, vector<int>(n+1));
        for(int i=1;i<=n;i++) up[0][i] = (i==1)?1:par[i];
        for(int k=1;k<LOG;k++)
            for(int i=1;i<=n;i++)
                up[k][i] = up[k-1][ up[k-1][i] ];

        vector<int> tin(n+1,-1);
        {
            vector<int> st2; st2.push_back(1);
            int timer=0;
            while(!st2.empty()){
                int u = st2.back(); st2.pop_back();
                tin[u]=timer++;
                for(int c: children[u]) st2.push_back(c);
            }
        }

        auto lca = [&](int u,int v){
            if(depth[u]<depth[v]) swap(u,v);
            int diff = depth[u]-depth[v];
            for(int k=0;k<LOG;k++) if((diff>>k)&1) u=up[k][u];
            if(u==v) return u;
            for(int k=LOG-1;k>=0;k--)
                if(up[k][u]!=up[k][v]){ u=up[k][u]; v=up[k][v]; }
            return up[0][u];
        };
        auto kthAncestor=[&](int v,int k)->int{
            for(int b=0;b<LOG;b++) if((k>>b)&1) v=up[b][v];
            return v;
        };

        int m;
        scanf("%d",&m);
        vector<int> a(m);
        vector<int> isTarget(n+1,0);
        for(int i=0;i<m;i++){ scanf("%d",&a[i]); isTarget[a[i]]=1; }

        vector<int> nodes = a;
        nodes.push_back(1);
        sort(nodes.begin(), nodes.end(), [&](int x,int y){ return tin[x]<tin[y]; });
        nodes.erase(unique(nodes.begin(), nodes.end()), nodes.end());

        vector<int> vparent(n+1,0);
        vector<int> inVT(n+1,0);
        vector<vector<int>> childVT(n+1);
        vector<int> touched;

        auto markVT=[&](int v){ if(!inVT[v]){ inVT[v]=1; touched.push_back(v);} };
        auto addEdge=[&](int u,int v){ vparent[v]=u; childVT[u].push_back(v); markVT(u); markVT(v); };

        vector<int> stk;
        stk.push_back(nodes[0]);
        markVT(nodes[0]);
        for(size_t i=1;i<nodes.size();i++){
            int x = nodes[i];
            int l = lca(stk.back(), x);
            markVT(l);
            if(l != stk.back()){
                while(stk.size()>=2 && depth[stk[stk.size()-2]] >= depth[l]){
                    addEdge(stk[stk.size()-2], stk.back());
                    stk.pop_back();
                }
                if(stk.back() != l){
                    addEdge(l, stk.back());
                    stk.pop_back();
                    stk.push_back(l);
                }
            }
            stk.push_back(x);
            markVT(x);
        }
        while(stk.size()>1){
            addEdge(stk[stk.size()-2], stk.back());
            stk.pop_back();
        }

        vector<int> order;
        order.reserve(touched.size());
        {
            vector<int> q; q.push_back(1);
            size_t qi=0;
            while(qi<q.size()){
                int u=q[qi++];
                order.push_back(u);
                for(int c: childVT[u]) q.push_back(c);
            }
        }

        vector<long long> cost(n+1,0);
        vector<int> freeflag(n+1,0);
        vector<int> ansEdges;

        auto repVertex=[&](int v,int c)->int{
            int diff = depth[c]-depth[v]-1;
            return kthAncestor(c, diff);
        };

        for(int idx=(int)order.size()-1; idx>=0; idx--){
            int v = order[idx];
            long long cv=0;
            bool used=false;
            if(isTarget[v]){
                for(int c: childVT[v]){
                    cv += cost[c];
                    if(freeflag[c]){ cv += 1; ansEdges.push_back(repVertex(v,c)); }
                }
                cost[v]=cv; freeflag[v]=1;
            } else {
                for(int c: childVT[v]){
                    cv += cost[c];
                    if(freeflag[c]){
                        if(!used) used=true;
                        else { cv+=1; ansEdges.push_back(repVertex(v,c)); }
                    }
                }
                cost[v]=cv; freeflag[v]= used?1:0;
            }
        }

        printf("%lld", cost[1]);
        for(int x: ansEdges) printf(" %d", x);
        printf("\n");
    }
}
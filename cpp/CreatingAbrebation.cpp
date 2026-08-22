#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        int avail = 0; 
        for(int i = 0; i < n; i++){
            char buf[25];
            scanf("%s", buf);
            char c = toupper(buf[0]);
            avail |= (1 << (c - 'A'));
        }
        vector<string> abbr(m);
        for(int i = 0; i < m; i++){
            char buf[25];
            scanf("%s", buf);
            abbr[i] = string(buf);
        }
        vector<bool> built(m, false);
        int builtCount = 0;
        bool changed = true;
        while(changed && builtCount < m){
            changed = false;
            for(int j = 0; j < m; j++){
                if(built[j]) continue;
                bool ok = true;
                for(char c : abbr[j]){
                    if(!(avail & (1 << (c - 'A')))){
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    built[j] = true;
                    builtCount++;
                    changed = true;
                    int fc = abbr[j][0] - 'A';
                    if(!(avail & (1 << fc))){
                        avail |= (1 << fc);
                    }
                }
            }
        }
        if(builtCount == m) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
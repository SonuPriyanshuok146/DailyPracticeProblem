#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(n < 2*k){
            cout << -1 << "\n";
            continue;
        }

        int best = INF;
        for(int q = k; q <= n-k; q++){
            int p = n - q; // total R's
            vector<int> dp(p+1, INF);
            dp[0] = 0;
            for(int i = 0; i < n; i++){
                vector<int> ndp(p+1, INF);
                for(int r = 0; r <= min(i, p); r++){
                    if(dp[r] == INF) continue;
                    int l_prefix = i - r;
                    // place R at position i
                    if(r+1 <= p && l_prefix <= q - k){
                        int cost = dp[r] + (s[i] != 'R' ? 1 : 0);
                        ndp[r+1] = min(ndp[r+1], cost);
                    }
                    // place L at position i
                    if(l_prefix+1 <= q && r >= k){
                        int cost = dp[r] + (s[i] != 'L' ? 1 : 0);
                        ndp[r] = min(ndp[r], cost);
                    }
                }
                dp.swap(ndp);
            }
            best = min(best, dp[p]);
        }

        cout << (best == INF ? -1 : best) << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<string> result(t);

    for(int tc = 0; tc < t; tc++){
        int n;
        cin >> n;
        vector<long long> w(n+1);
        for(int i = 1; i <= n; i++){
            cin >> w[i];
        }

        if(n%2 != 0){
            result[tc] = "NO";
            continue;
        }

        long long minOdd = LLONG_MAX, maxEven = LLONG_MIN;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 1) minOdd = min(minOdd, w[i]);
            else maxEven = max(maxEven, w[i]);
        }
        if(minOdd - maxEven >= 2) result[tc] = "YES";
        else result[tc] = "NO";
    }

    for(int tc = 0; tc < t; tc++){
        cout << result[tc] << "\n";
    }
    return 0;
}
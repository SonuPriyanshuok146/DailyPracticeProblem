#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int main(){

    int t;
    cin >> t;

    vector<int> ks(t);
    vector<vector<long long>> cs(t);

    for(int tc = 0; tc < t; tc++){
        int k;
        cin >> k;
        ks[tc] = k;
        vector<long long> c(k);
        for(int i = 0; i < k; i++){
            cin >> c[i];
        }
        cs[tc] = move(c);
    }

    vector<string> results(t);
    for(int tc = 0; tc < t; tc++){
        vector<long long>& c = cs[tc];

        long long max1 = 0, max2 = 0;
        for(long long v : c){
            if(v > max1){
                max2 = max1;
                max1 = v;
            } else if(v > max2){
                max2 = v;
            }
        }

        bool possible = (max1 >= 3) || (max1 >= 2 && max2 >= 2);
        results[tc] = possible ? "YES" : "NO";
    }

    for(int tc = 0; tc < t; tc++){
        cout << results[tc] << '\n';
    }

    return 0;
}
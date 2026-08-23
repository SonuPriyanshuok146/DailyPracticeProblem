#include<bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long chainCount(const string &chain){
    int implied = -1;
    for(int k = 0; k < (int)chain.size(); k++){
        char c = chain[k];
        if(c == '?') continue;
        int val = (c - '0') ^ (k % 2);
        if(implied == -1){
            implied = val;
        }else if(implied != val){
            return 0;
        }
    }
    if(implied == -1) return 2;
    return 1;
}

int main(){
    int t;
    cin >> t;

    vector<int> ns(t);
    vector<string> strs(t);

    for(int i = 0; i < t; i++){
        cin >> ns[i] >> strs[i];
    }

    vector<long long> answers(t);

    for(int i = 0; i < t; i++){
        int n = ns[i];
        string s = strs[i];

        string chain1 = "";
        string chain2 = "";
        for(int j = 0; j < n; j++){
            if(j % 2 == 0){
                chain1 += s[j];
            }else{
                chain2 += s[j];
            }
        }
        long long c1 = chainCount(chain1);
        long long c2 = chainCount(chain2);

        answers[i] = (c1*c2) % MOD;
    }

    string result = "";
    for(int i = 0; i < t; i++){
        result += to_string(answers[i]);
        result += "\n";
    }
    cout << result;
    return 0;
}
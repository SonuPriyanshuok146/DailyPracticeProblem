#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> nArr(t);
    vector<int> kArr(t);
    vector<string> sArr(t);

    for(int test = 0; test < t; test++){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        nArr[test] = n;
        kArr[test] = k;
        sArr[test] = s;
    }

    vector<int> results(t);

    for(int test = 0; test < t; test++){
        int n = nArr[test];
        int k = kArr[test];
        string s = sArr[test];

        int answer = 0;
        int i = 0;

        while(i < n){
            bool hasZero = false;
            for(int j = 0; j < k; j++){
                if(s[i+j] == '0'){
                    hasZero = true;
                }
            }
            if(hasZero == false){
                answer++;
            }
            i = i+k;
        }
        results[test ] = answer;
    }

    for(int test = 0; test < t; test++){
        cout << results[test] << endl;
    }
    return 0;
}
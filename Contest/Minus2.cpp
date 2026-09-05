#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> nArr(t);
    vector<vector<long long>> aArr(t);

    for(int test = 0; test < t; test++){
        int n;
        cin >> n;
        nArr[test] = n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        aArr[test] = a;
    }

    vector<long long> results(t);
    for(int test = 0; test < t; test++){
        int n = nArr[test];
        vector<long long>& a = aArr[test];

        long long oddCount = 0;
        long long evenCountPair[2] = {0,0};

        for(int i = 0; i < n; i++){
            long long x = a[i];
            long long d = x/2;

            if(x % 2 != 0){
                oddCount++;
            }else{
                evenCountPair[d%2]++;
            }
        }
        long long best = oddCount;
        if(evenCountPair[0] > best) best = evenCountPair[0];
        if(evenCountPair[1] > best) best = evenCountPair[1];

        results[test] = best;
    }

    for(int test = 0; test < t; test++){
        cout << results[test] << endl;
    }
    return 0;
}
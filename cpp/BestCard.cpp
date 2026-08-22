#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    vector<int> arr(t);
    vector<string> ans;
    
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int n : arr) { 
        int candidate = n + 1; 
        if (isPrime(candidate)) {
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }
    }

    for (string res : ans) {
        cout << res << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    vector<int> ans; 

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int countC = 0;
        int countmax = 0;

        for (char c : str) {
            if (c == '#') {
                countC++;
                countmax = max(countmax, countC);
            } else {
                countC = 0; 
            }
        }

        ans.push_back((countmax + 1) / 2);
    }

    for (int val : ans) {
        cout << val << "\n";
    }
    return 0;
}

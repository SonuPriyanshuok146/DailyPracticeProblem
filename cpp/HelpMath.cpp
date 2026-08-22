#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> arr;
    for (char c : str) {
        if (isdigit(c)) {
            arr.push_back(c - '0'); 
        }
    }

    sort(arr.begin(), arr.end());

    string ans = "";
    for (int i = 0; i < arr.size(); i++) {
        ans += to_string(arr[i]);
        if (i != arr.size() - 1) {
            ans += '+';
        }
    }

    cout << ans;
    return 0;
}

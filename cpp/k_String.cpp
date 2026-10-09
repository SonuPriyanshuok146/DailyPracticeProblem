#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    int freq[26] = {0};

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    string part = "";

    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0) {
            cout << -1;
            return 0;
        }

        part += string(freq[i] / k, 'a' + i);
    }

    string ans = "";

    for (int i = 0; i < k; i++) {
        ans += part;
    }

    cout << ans;
    return 0;
}
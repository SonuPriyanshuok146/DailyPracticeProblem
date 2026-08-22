#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_map<char, int> mp;

    for (char c : str) {
        mp[c]++;  // count frequency of each character
    }

    int count = mp.size();  // number of distinct characters

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}

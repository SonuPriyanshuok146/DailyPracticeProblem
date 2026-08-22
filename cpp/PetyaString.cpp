#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int n = str1.size();
    for (int i = 0; i < n; i++) {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);

        if (c1 < c2) {
            cout << -1;
            return 0;
        } else if (c1 > c2) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}

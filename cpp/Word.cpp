#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch[101];
    cin >> ch;

    int upperC = 0;
    int lowerC = 0;

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            upperC++;
        } else {
            lowerC++;
        }
    }

    if (upperC > lowerC) {
        for (int i = 0; ch[i] != '\0'; i++) {
            if (ch[i] >= 'a' && ch[i] <= 'z') {
                ch[i] = ch[i] - 'a' + 'A';
            }
        }
    } else {
        for (int i = 0; ch[i] != '\0'; i++) {
            if (ch[i] >= 'A' && ch[i] <= 'Z') {
                ch[i] = ch[i] - 'A' + 'a';
            }
        }
    }

    cout << ch << endl;

    return 0;
}
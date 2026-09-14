#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> levels;

    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    int y;
    cin >> y;
    for (int i = 0; i < y; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    if ((int)levels.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}

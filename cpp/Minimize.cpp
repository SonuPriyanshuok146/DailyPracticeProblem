#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans(t);

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        ans[i] = b - a;
    }

    for (int i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}

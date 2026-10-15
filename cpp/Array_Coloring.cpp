#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> ans;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int total = 0;

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            total += arr[j];
        }

        if (total % 2 == 0) {
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }
    }

    for (int i = 0; i < t; i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}
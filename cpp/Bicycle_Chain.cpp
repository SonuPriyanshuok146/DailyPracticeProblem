#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> m;

    vector<int> brr(m);
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }

    int mx = 0;
    int ans = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (brr[i] % arr[j] == 0) {
                int ratio = brr[i] / arr[j];

                if (ratio > mx) {
                    mx = ratio;
                    ans = 1;
                }
                else if (ratio == mx) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
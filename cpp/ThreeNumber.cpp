#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    vector<long long> a(t), b(t), c(t);
    for (int i = 0; i < t; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<long long> ans(t);
    for (int i = 0; i < t; i++) {
        long long mn  = min({a[i], b[i], c[i]});
        long long mx  = max({a[i], b[i], c[i]});
        long long mid = a[i] + b[i] + c[i] - mn - mx;

        if (mx >= mn + mid) {
            ans[i] = mid;
        } else {
            ans[i] = mx - mn;
        }
    }

    for (int i = 0; i < t; i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}
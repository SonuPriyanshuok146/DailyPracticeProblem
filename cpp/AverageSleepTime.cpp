#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sum of first window
    long long currSum = 0;
    for (int i = 0; i < k; i++) {
        currSum += arr[i];
    }

    long long totalSum = currSum; // include first window
    int numWeeks = n - k + 1;

    // Slide the window
    for (int i = k; i < n; i++) {
        currSum += arr[i] - arr[i - k];
        totalSum += currSum;
    }

    double result = (double)totalSum / numWeeks;

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}

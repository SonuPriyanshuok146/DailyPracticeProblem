#include <iostream>
#include <vector>
#include <string>
using namespace std;

int toggle(int a) {
    return (a == 0) ? 1 : 0;
}

int main() {
    // Reading the 3x3 input matrix
    vector<vector<int>> lst(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> lst[i][j];
        }
    }

    // Initial state = all on
    vector<vector<int>> ans(3, vector<int>(3, 1));

    // Iterating through the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (lst[i][j] % 2 == 1) {
                // Toggle the particular switch
                ans[i][j] = toggle(ans[i][j]);
                // Deal with adjacent switches
                if (i < 2) ans[i+1][j] = toggle(ans[i+1][j]);
                if (i > 0) ans[i-1][j] = toggle(ans[i-1][j]);
                if (j > 0) ans[i][j-1] = toggle(ans[i][j-1]);
                if (j < 2) ans[i][j+1] = toggle(ans[i][j+1]);
            }
        }
    }

    // Printing the answer
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}

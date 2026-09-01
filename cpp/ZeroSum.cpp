#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<string> result;

    while(t--){
        int n;
        cin >> n;
        int sum = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            sum += x;
        }

        if (abs(sum) % 4 == 0)
            result.push_back("YES");
        else
            result.push_back("NO");
    }

    for (auto &s : result) cout << s << "\n";
    return 0;
}
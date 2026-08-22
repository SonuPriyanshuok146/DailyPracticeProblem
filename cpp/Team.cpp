#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(3));

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(arr[i][0] + arr[i][1] + arr[i][2] >= 2){
            ans++;
        }
    }
    cout << ans;
}
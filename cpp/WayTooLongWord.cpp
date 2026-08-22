#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> arr(n);
    vector<string> ans(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i].size() <= 10){
            ans[i] = arr[i];
        }else{
            ans[i] = arr[i][0] + to_string(arr[i].size()-2) + arr[i].back();
        }
    }

    for(string str : ans){
        cout << str << endl;
    }

    return 0;
}
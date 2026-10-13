#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> arr(n);
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int ans = 0;

    for(int i = 0; i < min(m, n); i++){
        if(arr[i] < 0){
            ans += abs(arr[i]);
        }else{
            break;
        }
        
    }
    cout << ans << endl;
    return 0;
}
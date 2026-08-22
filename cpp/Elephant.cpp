#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;

    if(n < 5){
        cout << 1;
        return 0;
    }

    while(n >= 5){
        n = n - 5;
        ans++;
    }
    if(n > 0){
        ans++;
    }
    cout << ans;
    return 0;
}
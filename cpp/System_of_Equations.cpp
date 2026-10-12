#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int temp = min(n, m);
    int ans = 0;

    for(int i = 0; i <= temp; i++){
        for(int j = 0; j <= temp; j++){
            if(i*i + j == n && i + j*j == m){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
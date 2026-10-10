#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    int n = str.size();

    string ans = "";

    int i = 0;

    while(i < n){
        if(str.substr(i, 3) == "WUB"){
            i += 3;
        }else{
            ans += str[i];
            i++;
        }
        if(i < n && str.substr(i, 3) == "WUB" && !ans.empty() && ans.back() != ' '){
            ans += ' ';
        }
    }
    if(!ans.empty() && ans.back() == ' '){
        ans.pop_back();
    }
    cout << ans << '\n';
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    if(str[0] == tolower(str[0])){
        str[0] = str[0] - 97 + 65;
    }
    cout << str;
    return 0;
}
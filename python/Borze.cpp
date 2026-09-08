#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    string res = "";

    for(int i = 0; i < n; i++){
        if(str[i] == '.'){
            res += '0';
        }else if(str[i] == '-' && str[i+1] == '.'){
            res += '1';
            i++;
        }else if(str[i] == '-' && str[i+1] == '-'){
            res += '2';
            i++;
        }
    }
    cout << res;
    return 0;
}
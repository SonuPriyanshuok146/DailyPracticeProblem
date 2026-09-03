#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> res(n);

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        bool deleted0 = false;
        bool deleted1 = false;

        for(char c : str){
            if(!deleted0 && c == '0'){
                deleted0 = true;
                continue;
            }
            if(!deleted1 && c == '1'){
                deleted1 = true;
                continue;
            }
            res[i].push_back(c);
        }
    }

    for(int i = 0; i < n; i++){
        cout << res[i] << endl;
    }

    return 0;
}
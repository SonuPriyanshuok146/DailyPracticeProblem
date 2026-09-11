#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> ans;

    while(n--){
        int x, y;
        cin >> x >> y;

        if(x % y == 0){
            ans.push_back("YES");
        }else{
            ans.push_back("NO");
        }
    }

    for(string str : ans){
        cout << str << endl;
    }
    return 0;
}

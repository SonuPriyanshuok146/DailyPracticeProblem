#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> n(t);
    for(int i = 0; i < t; i++){
        cin >> n[i];
    }

    vector<vector<int>> answers(t);
    for(int tc = 0; tc < t; tc++){
        int len = n[tc];
        vector<int> p(len + 1);
        int odd = 1, even = 2;
        for(int i = 1; i <= len; i++){
            if(i % 2 == 1){
                p[i] = even;
                even += 2;
            }else{
                p[i] = odd;
                odd += 2;
            }
        }
        answers[tc].assign(p.begin()+1, p.end());
    }
    for(int tc = 0; tc < t; tc++){
        for(int i = 0; i < answers[tc].size(); i++){
            cout << answers[tc][i] << " ";
        }
        cout << endl;
    }
}
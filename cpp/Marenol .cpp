#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<string> a(t), b(t);

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        cin >> a[i] >> b[i];
    }

    vector<string> ans(t);

    for(int i = 0; i < t; i++){
        string x = a[i];
        string y = b[i];

        int n = x.size();
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

        for(int j = 0; j < n; j++){
            if(j % 2 == 0){
                if(x[j] == '1') c1++;
                if(y[j] == '1') c2++;
            }else{
                if(x[j] == '1') c3++;
                if(y[j] == '1') c4++;
            }
        }
        if(c1 == c2 && c3 == c4){
            ans[i] = "YES";
        }else{
            ans[i] = "NO";
        }
    }

    for(int i = 0; i < t; i++){
        cout << ans[i] << endl;
    }

    return 0;
}
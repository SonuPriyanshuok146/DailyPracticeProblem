#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> X(n);

    for(int i = 0; i < n; i++){
        cin >> X[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        if(X[i] == "++X" || X[i] == "X++"){
            sum++;
        }else if(X[i] == "--X" || X[i] == "X--"){
            sum--;
        }
    }
    cout << sum;
}
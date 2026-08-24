#include<iostream>
using namespace std;

int main(){
    int cost, dol, banana;
    cin >> cost >> dol >> banana;
    int res = cost*(banana*(banana+1)/2) - dol;

    if(res > 0){
        cout << res;
    }else{
        cout << 0;
    }
    return 0;
}
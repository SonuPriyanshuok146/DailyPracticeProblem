#include<iostream>
using namespace std;

void fun(int a, int b){
    int c = a/b;
    cout << c;
}

int main(){
    int a, b;
    cin >> a >> b;
    fun(a, b);
    return 0;
}
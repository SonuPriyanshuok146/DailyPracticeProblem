// given n, count set bits and print it

#include<iostream>
using namespace std;

/*
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0;
    while(n != 0){
        int q = n % 2;
        if(q) count++;
        n /= 2;
    }
    cout << count <<" set bit.";
    return 0;
}
*/



int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0;
    while(n != 0){
        count += (n & 1);
        n = n >> 1;
    }
    cout << count <<" set bit.";
    return 0;
}
// given n, check whether n is palindrome number or not Ex : 1331 --> palindrome number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;
    int rev = 0;
    while(temp != 0){
        int q = temp % 10;
        rev = rev*10 + q;
        temp /= 10;
    }
    if(n == rev){
        cout << "Palindrome Number.";
    }else{
        cout << "Not a Palindrome Number.";
    }
    return 0;
}
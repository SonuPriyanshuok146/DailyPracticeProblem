#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;

    // int n = str.size();
    // for(int i = 0; i < n/2; i++){
    //     char temp = str[i];
    //     str[i] = str[n-1-i];
    //     str[n-1-i] = temp;
    // }

    int n = 0;
    int i = 0;
    while(str[i] != '\0'){
        n++;
        i++;
    }
    for(int i = 0; i < n/2; i++){
        char temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }

    cout << "Reverse String: " << str;
    return 0;
}
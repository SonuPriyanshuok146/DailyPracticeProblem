#include<iostream>
#include<cstring>
using namespace std;

/*
int main(){
    string str1, str2;
    cout << "Enter 2 string: ";
    cin >> str1 >> str2;

    if(str1 == str2){
        cout << "Given string are equal.";
    }else{
        cout << "Given string are not equal.";
    }
    return 0;
}
*/


int main(){
    char str1[100];
    char str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    if(strcmp(str1,str2) == 0){ //if equal then return 0
        cout << "Same";
    }else{
        cout << "Not Same";
    }

    return 0;
}
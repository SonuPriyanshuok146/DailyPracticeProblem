/*
//write a program to check whether the string is palindrome or not
#include<iostream>
using namespace std;

int main(){
    string str1 = "mammam";

    int n = str1.size();
    string temp = str1;
    for(int i = 0; i < n/2; i++){
        str1[i] = str1[n-1-i];
    }

    if(temp == str1){
        cout << "Palindrome";
    }else{
        cout << "Not Palindrome";
    }
}
*/

// write a program to copy str1 to str2 without using strcpy() function
#include<iostream>
using namespace std;

int main(){
    string str1 = "Mammal";
    string str2 = "";

    int n = str1.size();
    for(int i = 0; i < n; i++){
        str2.push_back(str1[i]);
    }
    cout <<str1 <<endl << str2;
    return 0;
}
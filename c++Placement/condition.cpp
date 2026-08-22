// #include<iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout << "Enter marks: ";
//     cin >> marks;
//     if(marks >= 90){
//         cout << "Grade A";
//     }else if(marks >= 75){
//         cout << "Grade B";
//     }else if(marks >= 45){
//         cout << "Grade C";
//     }else{
//         cout << "Fail";
//     }
//     return 0;
// }

/*
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter Third number: ";
    cin >> c;
    if(a > b && a > c){
        cout << a <<" is largest number.";
    }else if(b > c && b > a){
        cout << b <<" is largest number.";
    }else{
        cout << c << " is largest number.";
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout <<"Uppercase";
    }else if(ch >= 'a' && ch <= 'z'){
        cout << "Lowecase";
    }else{
        cout << "Not a character";
    } 
}
*/


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number n: ";
    cin >> n;

    int evenSum = 0;
    for(int i = 2; i <= n; i+=2){
        evenSum += i;
    }
    cout << "Even Sum = " << evenSum;
}
*/

/*
// Given n find sum of all digit of n.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int digitSum = 0;
    while(n != 0){
        int q = n % 10;
        digitSum += q;
        n /= 10;
    }
    cout << "Digit Sum = " << digitSum;
}
*/




//Given n print reverse of the number n
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter number: ";
    cin >> n; 
    int rev = 0;

    while(n != 0){
        int q = n % 10;
        rev = rev*10 + q;
        n /= 10;
    }
    cout << "Reverse of number is " << rev;
    return 0;
}
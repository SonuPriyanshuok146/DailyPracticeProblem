#include<iostream>
using namespace std;

/*
int main(){
    int a, b;
    cout << "Enter the 2 number: ";
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << a << "  "<< b;
    return 0;
}
*/


/*
int main(){
    int a, b;
    cout << "Enter the 2 number: ";
    cin >> a >> b;
    
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << "  "<< b;
    return 0;
}
*/


int main(){
    int a, b;
    cout << "Enter the 2 number: ";
    cin >> a >> b;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << "  "<< b;
    return 0;
}
#include<iostream>
using namespace std;

/*
int main(){
    int a = 10;
    cout << a << endl;
    cout << &a << endl; //address at a

    int *p = &a;
    cout << p << endl;
    cout << *p << endl; // dereferencing of p
    return 0;
}
*/

/*
int main(){
    int arr[5] = {10,20,30,40,50};

    int *p = arr;
    cout << arr[3] << endl;
    cout << *(p+3) << endl; 
    cout << *(3+p) << endl;
    cout << 3[arr] << endl;
    return 0;
}
*/


int main(){
    int arr[5] = {10,20,30,40,50};

    int *p = arr;
    int **p1 = &p;
    cout << arr[3] << endl;
    cout << *(p+3) << endl; 
    cout << *(3+p) << endl;
    cout << 3[arr] << endl;
    cout << **(p1) << endl;
    return 0;
}
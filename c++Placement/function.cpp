#include<iostream>
using namespace std;

/*
void swapp(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b; 
    cout << "Enter the 2 number: ";
    cin >> a >> b;
    swapp(&a, &b);
    cout << a << " " << b;
    return 0;
}
*/


// call by references
/*
void swapp(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b; 
    cout << "Enter the 2 number: ";
    cin >> a >> b;
    swapp(a, b);
    cout << a << " " << b;
    return 0;
}
*/

// check if a number is prime or not
bool isPrime(int a){
    if(a < 2){
        return false;
    }
    for(int i = 2; i*i <= a; i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(isPrime(num)){
        cout << "Prime number.";
    }else{
        cout << "Not a Prime number.";
    }
}
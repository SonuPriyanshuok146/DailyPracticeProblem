#include<iostream>
#include<exception>
using namespace std;

/*
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
*/

/*
int main(){
    try{
        int age;
        cin >> age;
        if(age < 18){
            throw age;
        }
        cout << "Eligible Age";
    }
    catch(int x){
        cout << "Under age & age is : " << x;
    }
}
*/

/*
int fun(int a, int b){
    if(b == 0){
        throw "Division by Zero";
    }
    return a/b;
}

int main(){
    try{
        int x, y;
        cin >> x >> y;
        int c = fun(x,y);
    }
    catch(const char *e){
        cout <<e;
    }
}
*/

int main(){
    try{
        throw runtime_error("Division by Zero");
    }
    catch(exception &e){
        cout << e.what();
    }
    return 0;
}
#include<iostream>
using namespace std;

/*
class complex{
    public:
    int real;
    int imag;

    complex(int a, int b){
        real = a;
        imag = b;
    }

    complex operator+(complex c){
        complex result(0,0);
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void display(){
        cout << real << " " <<imag;
    }
};

int main(){
    complex c1(5,6);
    complex c2(7,8);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}
*/

class Animal{
    public:
    virtual void sound(){
        cout << "Animal Voice";
    }
};

class Dog : public Animal{
    public:
    void sound(){
        cout << "Bark"<<endl;
    }
};

class Cat : public Animal{
    public:
    void sound(){
        cout << "Meow";
    }
};

int main(){
    Animal *ptr;
    Dog d;
    ptr = &d;
    (*ptr).sound();
    Cat c;
    ptr = &c;
    ptr->sound();
    return 0;
}
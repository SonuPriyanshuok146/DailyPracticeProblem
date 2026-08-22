#include<iostream>
using namespace std;

class student{
    int marks;
    public:
    student(int x){
        marks = x;
    }
    friend void display(student s);
};

void display(student s){
    cout << s.marks;
}

int main(){
    student a(98);
    display(a);
    return 0;
}
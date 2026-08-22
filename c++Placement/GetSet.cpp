#include<iostream>
using namespace std;

class student{
    int age;
    int rollno;
    public:
        int getage(){
            return age;
        }
        void setage(int a){
            cout << this << endl;
            age = a;
        }
        int getrollno(){
            return rollno;
        }
        void setrollno(int rno){
            rollno = rno;
        }
};

int main(){
    student s1;
    cout << &s1 << endl;
    s1.setage(22);
}
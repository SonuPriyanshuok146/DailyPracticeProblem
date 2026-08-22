#include<iostream>
using namespace std;

/*
class student{
    public:
    int age;
    int rollno;
};

int main(){
    student s1;
    s1.age = 25;
    s1.rollno = 100;
    cout << s1.age << " " <<s1.rollno << endl;

    student s2;
    s2.age = 21;
    s2.rollno = 200;
    cout << s2.age << " " <<s2.rollno << endl;

    student *s3 = new student;
    s3->age = 22;
    s3->rollno = 300;
    cout << s3->age << " " << s3->rollno << endl;

    return 0;
}
*/




class BankAccount{
    int accountno;
    int balance;
    public:
    void setbalance(int amount){
        balance = amount;
    }
    void debit(int amount){
        balance -= amount;
    }
    void credit(int amount){
        balance += amount;
    }
    int display(){
        return balance;
    }
};

int main(){
    BankAccount b1;
    b1.setbalance(5000);
    b1.debit(500);
    b1.credit(1000);
    cout << b1.display();
}
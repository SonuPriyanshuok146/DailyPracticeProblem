#include<iostream>
using namespace std;

class ABC {
    public:
    int x, y;
};


int main(){
    ABC obj1;
    obj1.x = 4;
    obj1.y = 5;

    ABC obj2(obj1);
    ABC obj3;
    obj3 = obj1;

    cout << obj3.x << " " << obj3.y;
    return 0;
}
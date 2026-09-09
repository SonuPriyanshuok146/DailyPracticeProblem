#include<iostream>
#include<string>
#include<set>
using namespace std;

bool isBeautiful(int year){
    set<int> digits;
    while(year > 0){
        digits.insert(year % 10);
        year /= 10;
    }
    return digits.size() == 4;
}

int main(){
    int year;
    cin >> year;

    while(true){
        year++;
        if(isBeautiful(year)){
            cout << year << endl;
            break;
        }
    }
    return 0;
}
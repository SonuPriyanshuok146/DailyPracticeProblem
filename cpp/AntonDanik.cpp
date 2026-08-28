#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;

    cin >> str;

    int CountA = 0;
    int CountD = 0;

    for(char ch : str){
        if(ch == 'A') CountA++;
        if(ch == 'D') CountD++;
    }

    if(CountA == CountD){
        cout << "Friendship";
    }else if(CountA > CountD){
        cout << "Anton";
    }else{
        cout << "Danik";
    }
    return 0;
}
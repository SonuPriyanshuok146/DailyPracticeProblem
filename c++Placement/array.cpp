
#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"ENter number: ";
    cin >> n;

    int sum = 0;

    int arr[n];
    cout << "Enter " << n << " number: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all number = " << sum;

    return 0;
}

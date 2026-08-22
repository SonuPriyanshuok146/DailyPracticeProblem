// #include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter Size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout << maxi << " is the largest element.";

    return 0;
}
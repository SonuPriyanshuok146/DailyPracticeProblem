/*
// Write a program to add all element of 2D array
#include<iostream>
using namespace std;

int main(){
    int arr[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    int sum = 0;
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 4; i++){
            sum += arr[j][i];
        }
    }
    cout << "Sum of all element: " << sum;
    return 0;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    int largest = INT_MIN;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            largest = max(largest, arr[i][j]);
        }
    }
    cout << largest;
    return 0;
}
*/



/*
//Write a program to print sum of element row wise
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][3] = {{10,6,20}, {11,5,12}, {9, 15,4}};

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        cout << "Sum of Row"<< i+1 <<": " << sum << endl;
    }
    return 0;
}
*/




/*
//Write a program to print sum of element Column wise
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[][3] = {{10,6,20}, {11,5,12}, {9, 15,4}};

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[j][i];
        }
        cout << "Sum of Column"<< i+1 <<": " << sum << endl;
    }
    return 0;
}
*/


/*
// write a program to print all the diagonal elements
#include<iostream>
using namespace std;

int main(){
    int arr[][3] = {{10,21,13}, {11,15,9}, {22,4,6}};

    cout << "Diagonal elements are: ";
    for(int i = 0; i < 3; i++){
        cout << arr[i][i] << " ";
    }
    return 0;
}
*/




// to transpose a square matrix;
#include<iostream>
using namespace std;

int main(){
    int arr[][3] = {{20,7,9}, {6,15,11}, {1,13,8}};


    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
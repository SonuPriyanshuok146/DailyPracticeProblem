/*
#include<iostream>
using namespace std;

int main(){
    char name[100];
    cout << "Enter name: ";
    cin >> name;
    name[10] = 'y';
    //cout << name;

    name[9] = 'x';
    //cout << name;

    name[2] = '\0';
    cout << name;
    return 0;
}
*/

/*
//Calculate the length of string
#include<iostream>
using namespace std;

int main(){
    char name[100];
    cout << "Enter your name: ";
    cin >> name;

    int count = 0;
    int i = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    cout << "Length of String: "<< count;
    return 0;
}
*/


/*
// How to pass array in function
#include<iostream>
using namespace std;

void printarray(int a[], int n){
    for(int i = 0; i < n; i++){
        a[i] += 2;
    }
}

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    printarray(arr, 5);

    for(int j = 0; j < 5; j++){
        cout << arr[j] << " ";
    }
}
*/



/*
// how to pass array in char array
#include<iostream>
using namespace std;

void printstr(char arr[]){
    
}

int main(){
    char arr[100];
    cin >> arr;
    printstr(arr);
    cout << arr;
    return 0;
}
*/





#include<iostream>
using namespace std;

int main(){
    char name[100];
    // cin >> name;
    //cin.getline(name, 100);
    //cin.getline(name, 100, 'a');
    cin.getline(name, 4);
    cout << name;
    return 0;
}
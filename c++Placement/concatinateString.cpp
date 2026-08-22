/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100];
    char str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    int n1 = strlen(str1);
    int n2 = strlen(str2);

    for(int i = 0; i <= n2; i++){
        str1[i+n1] = str2[i];
    }

    cout << str1 << "\n" << str2;
    
    
    return 0;
}
*/





/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100];
    char str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    strcat(str1, str2);

    cout << str1 << "\n" << str2;
    
    
    return 0;
}
*/



/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[] = "Hello";
    char str2[] = "Sonu";

    strcat(str1, str2);

    cout << str1 << "\n" << str2;
    
    return 0;
}
*/




/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[] = "Hello";
    char str2[] = "Sonu";

    cout <<strcpy(str1, str2);
    
    return 0;
}
*/


// Write a program to print all the prefix of a string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100];
    cin.getline(str1, 100);
    
    for(int i = 0; str1[i] != '\0'; i++){
        for(int j = 0; j <= i; j++){
            cout << str1[j];
        }
        cout << endl;
    }
    return 0;
}
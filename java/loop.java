/* 
class LoopW{
    public static void main(String[] args){
        int i = 1;
        while(i <= 10){
            System.out.println(i);
            i += 2;
        }
    }
}

*/


/*
class DoWhile{
    public static void main(String[] args){
        int i = 1;
        do{
            System.out.println(i);
            i--;
        }while(i < 0);
    }
}
*/

/*
class ForLoop{
    public static void main(String[] str){
        for(int i = 1; i <= 5; i++){
            System.out.println(i);
        }
    }
}
*/

/*
class ForArr{
    public static void main(String[] str){
        int[] data = {10,20,30,40,50};

        // for(int i = 0; i < data.length; i++){
        //     System.out.println(data[i]);
        // }

        for(int x : data){
            System.out.println(x);
        }
    }
}
*/

/*

// Enter n: 5
// *****
// *****
// *****
// *****
// *****
import java.util.Scanner;
class PatternPrinting{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                System.out.print("*");
            }
            System.out.println(); //only line will change
        }
    }
}
*/


/*
// Enter n: 5
// *
// **
// ***
// ****
// *****
import java.util.Scanner;
class PatternPrintinginTriangle{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                System.out.print("*");
            }
            System.out.println(); //only line will change
        }
    }
}
*/




/*

// Enter n: 5
// *****
// ****
// ***
// **
// *
import java.util.Scanner;
class PatternPrintinginTriangleO{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-i; j++){
                System.out.print("*");
            }
            System.out.println(); //only line will change
        }
    }
}
*/

/*

// Enter n: 5
// 1
// 22
// 333
// 4444
// 55555
import java.util.Scanner;
class PatternPrintinginTriangleNum{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(i);
            }
            System.out.println(); //only line will change
        }
    }
}


*/




/*

// Enter n: 5

// A
// AB
// ABC
// ABCD
import java.util.Scanner;
class PatternPrintinginTriangleAl{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        // for(int i = 0; i < n; i++){
        //     for(char j = 'A'; j <='A' + i; j++){
        //         System.out.print(j);
        //     }
        //     System.out.println(); //only line will change
        // }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                System.out.print((char)('A'+j));
            }
            System.out.println(); //only line will change
        }
    }
}
*/



/*
// Enter n: 5
//      *
//     **
//    ***
//   ****
//  *****
import java.util.Scanner;
class PatternPrintinginTriangleRi{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            for(int k = 0; k < n-i; k++){
                System.out.print(" ");
            }
            for(int j = 0; j <= i; j++){
                System.out.print("*");
            }
            System.out.println(); //only line will change
        }
    }
}
*/



/*
// Enter n: 5
//      *
//     ***
//    *****
//   *******
//  *********
import java.util.Scanner;
class PatternPrintinginPyramid{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            for(int k = 0; k < n-i; k++){
                System.out.print(" ");
            }
            for(int j = 0; j <= i; j++){
                System.out.print("*");
            }
            for(int l = 0; l < i; l++){
                System.out.print("*");
            }
            System.out.println(); //only line will change
        }
    }
}
*/


//take a input N from user
//1 to N which is even and print the sum

// Enter n: 10
// Even Sum : 30
import java.util.Scanner;
class EvenSum{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                sum += i;
            }
        }
        System.out.println("Even Sum : " + sum);
        sc.close();
    }
}
/*
import java.util.Scanner;
class RevNums{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        int rev = 0;
        while(n != 0){
            int q = n % 10;
            rev = rev*10 + q;
            n /= 10;
        }
        System.out.println("Reverse: " + rev);
        sc.close();
    }
}
*/
import java.util.Scanner;
class PalindromeNum{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        int temp = n;

        int rev = 0;
        while(temp != 0){
            int q = temp % 10;
            rev = rev*10 + q;
            temp /= 10;
        }

        if(rev == n){
            System.out.println("Palindrome.");
        }else{
            System.out.println("Not Palindrome.");
        }
        sc.close();
    }
}

/*
import java.util.Scanner;
class Palindrome{
    public static void main(){
        System.out.print("Enter the String: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        String rev = "";

        for(int i = str.length()-1; i >= 0; i--){
            rev += str.charAt(i);
        }

        if(rev.equals(str)){
            System.out.println("Palindrome.");
        }else{
            System.out.println("Not Palindrome.");
        }
    }
}
*/

/*
import java.util.Scanner;
class Palindrome{
    public static void main(){
        System.out.print("Enter the String: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        int i = 0, j = str.length()-1;
        boolean check = true;
        while(i < j){
            if(str.charAt(i) != str.charAt(j)){
                check = false;
                break;
            }
            i++;
            j--;
        }

        if(check){
            System.out.println("Palindrome.");
        }else{
            System.out.println("Not Palindrome.");
        }
    }
}

*/


import java.util.Scanner;
class Palindrome{
    public static void main(){
        System.out.print("Enter the String: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        String rev = new StringBuilder(str).reverse().toString();

        if(str.equals(rev)){
            System.out.println("Palindrome.");
        }else{
            System.out.println("Not Palindrome.");
        }
    }
}


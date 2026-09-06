// Take a input N from user count the number of digits in the given number.

// Enter n: 12345
// Number of Digit : 5
import java.util.Scanner;
class DigitNum{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        int dig = 0;
        if(n == 0){
            dig = 1;
        }else{
            while(n != 0){
                dig++;
                n /= 10;
            }
        }
        
        System.out.println("Number of Digit : " + dig);
        sc.close();
    }
}

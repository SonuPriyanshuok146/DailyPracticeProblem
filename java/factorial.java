//factorial of given number
import java.util.Scanner;
class Factorial{
    public static void main(String[] str){
        System.out.print("Enter n: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int fact = 1;
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
        System.out.println("Factorial: " + fact);
        sc.close();
    }
}

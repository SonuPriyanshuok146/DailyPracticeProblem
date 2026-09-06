import java.util.Scanner;
class Fibonacci{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of Fibonacci term: ");
        int n = sc.nextInt();


        int lastfirst = 0;
        int lastsecond = 1;
        int data;
        for(int i = 0; i < n; i++){
            System.out.print(lastfirst + " ");
            data = lastfirst + lastsecond;
            lastfirst = lastsecond;
            lastsecond = data;
        }
        sc.close();
    }
}

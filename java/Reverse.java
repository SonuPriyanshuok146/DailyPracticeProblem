import java.util.Scanner;

class Reverse{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []marks = new int[n];
        
        for(int i = 0; i < n; i++){
            marks[i] = sc.nextInt();
        }
        sc.close();

        for(int i = 0; i < n/2; i++){
            int temp = marks[i];
            marks[i] = marks[n-1-i];
            marks[n-1-i] = temp;
        }
        
        System.out.println("Reverse Array: ");
        for(int x : marks){
            System.out.print(x + " ");
        }
    }
}

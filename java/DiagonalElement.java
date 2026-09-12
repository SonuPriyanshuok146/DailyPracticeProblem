import java.util.Scanner;
class DiagonalElement{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [][]marks = new int[n][n];

        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                marks[i][j] = sc.nextInt();
            }
        }
        sc.close();

        System.out.print("Diagonal element: ");
        for(int i = 0; i < n; i++){
            System.out.print(marks[i][i] + " ");
        }
        
    }
}


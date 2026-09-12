import java.util.Scanner;
class SumColumnWise{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int cols = sc.nextInt();
        int [][]marks = new int[rows][cols];

        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                marks[i][j] = sc.nextInt();
            }
        }
        sc.close();

        for(int i = 0; i < rows; i++){
            int sum = 0;
            for(int j = 0; j < cols; j++){
                sum += marks[j][i];
            }
            System.out.println("Sum of element: "+ sum +" ");
        }
        
    }
}

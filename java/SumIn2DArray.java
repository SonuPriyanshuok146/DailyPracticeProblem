import java.util.Scanner;
class SumIn2DArray{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int cols = sc.nextInt();
        int [][]marks = new int[rows][cols];

        int sum = 0;
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                marks[i][j] = sc.nextInt();
                sum += marks[i][j];
            }
        }
        sc.close();
        System.out.println("Sum of element: "+ sum);

    }
}



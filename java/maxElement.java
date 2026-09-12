import java.util.Scanner;
class MaxElement{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []marks = new int[n];
        
        for(int i = 0; i < n; i++){
            marks[i] = sc.nextInt();
        }
        sc.close();

        int maxi = marks[0];
        for(int x : marks){
            if(x > maxi){
                maxi = x;
            }
        }

        System.out.println("Maximum element: "+ maxi);
    }
}


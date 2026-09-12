import java.util.Scanner;
class SecMaxElement{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []marks = new int[n];
        
        for(int i = 0; i < n; i++){
            marks[i] = sc.nextInt();
        }
        sc.close();

        int maxi = Integer.MIN_VALUE;
        int secondMaxi = Integer.MIN_VALUE;
        for(int x : marks){
            if(x > maxi){
                secondMaxi = maxi;
                maxi = x;
            }else if(x > secondMaxi && x != maxi){
                secondMaxi = x;
            }
        }

        System.out.println("Second largest element: "+ secondMaxi);
    }
}
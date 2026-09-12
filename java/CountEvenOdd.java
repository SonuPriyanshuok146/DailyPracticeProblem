import java.util.Scanner;
class CountEvenOdd{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []marks = new int[n];
        int EvenCount = 0;
        int OddCount = 0;

        for(int i = 0; i < n; i++){
            marks[i] = sc.nextInt();
            if(marks[i] % 2 == 0){
                EvenCount++;
            }else{
                OddCount++;
            }
        }
        sc.close();

        System.out.println("Even Count: "+ EvenCount + "; Odd Count: "+ OddCount);


    }
}

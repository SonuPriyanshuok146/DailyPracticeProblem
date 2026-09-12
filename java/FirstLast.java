import java.util.Scanner;
class FirstLastIdx{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []marks = new int[n];
        
        for(int i = 0; i < n; i++){
            marks[i] = sc.nextInt();
        }
        
        sc.close();

        int idx1 = -1;
        int idx2 = -1;

        for(int i = 0; i < n; i++){
            idx1 = i;
            for(int j = n-1; j >= 0; j--){
                if(marks[i] == marks[j]){
                    idx2 = j;
                    break;
                }
            }
            System.out.println(marks[i] + " 1st idx: " + idx1 + "; 2nd idx: "+ idx2);
        }
    }
}
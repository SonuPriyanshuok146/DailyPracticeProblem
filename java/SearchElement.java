import java.util.Scanner;
class SearchElement{
    public static void main(String[] str){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []marks = new int[n];
        
        for(int i = 0; i < n; i++){
            marks[i] = sc.nextInt();
        }
        
        System.out.print("Enter target element: ");
        int target = sc.nextInt();
        sc.close();

        boolean flag = true;

        for(int i = 0; i < n; i++){
            if(marks[i] == target){
                System.out.println("Element present at: "+ (i+1));
                flag = false;
                break;
            }
        }
        if(flag){
                System.out.println("Element is not present."+ -1);
        }
    }
}

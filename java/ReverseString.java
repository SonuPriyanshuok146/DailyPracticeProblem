import java.util.Scanner;
class ReverseStr{
    public static void main(String[] args){
        System.out.print("Enter String: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        // String rev = "";
        // for(int i = str.length()-1; i>=0; i--){
        //     rev += str.charAt(i);
        // }

        StringBuilder sb = new StringBuilder(str);
        sb.reverse();

        
        // System.out.println("Reverse String: "+ rev);
        System.out.println("Reverse String: "+ sb);
    }
}



import java.util.Scanner;
class CountDigit{
    public static void main(String[] args){
        System.out.print("Enter String: ");
        int count = 0;
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        for(int i = 0; i < str.length(); i++){
            if(Character.isDigit(str.charAt(i))){
                count++;
            }
        }
        System.out.println("Digit in string: "+ count);
    }
}

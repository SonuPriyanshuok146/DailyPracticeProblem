import java.util.Scanner;
class CountLetter{
    public static void main(String[] args){
        System.out.print("Enter String: ");
        int count = 0;
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        for(int i = 0; i < str.length(); i++){
            if(Character.isLetter(str.charAt(i))){
                count++;
            }
        }
        System.out.println("Letter in string: "+ count);
    }
}


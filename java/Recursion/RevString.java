package Recursion;

public class RevString {

    static String ReverseString(String str){
        if(str.length() <= 1){
            return str;
        }
        return ReverseString(str.substring(1)) + str.charAt(0);
    }
    public static void main(String[] str){
        String result = ReverseString("Priyanshu");
        System.out.println(result);
    }
}

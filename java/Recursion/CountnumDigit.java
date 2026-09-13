package Recursion;

public class CountnumDigit {

    static int CountofDigit(int data){
        if(data == 0){
            return 0;
        }
        return 1 + CountofDigit(data/10);
    }
    public static void main(String[] str){
        int result = CountofDigit(21);
        System.out.println(result);
    }
}

package Recursion;

public class sumofDigit {

    int sum = 0;
    static int SumofDigit(int data){
        if(data == 0){
            return 0;
        }
        return (data%10) + SumofDigit(data/10);
    }
    public static void main(String[] str){
        int result = SumofDigit(21);
        System.out.println(result);
    }
}

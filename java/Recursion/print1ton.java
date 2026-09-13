package Recursion;
/*
//print 1 to n
public class print1ton {
    static void printnum(int n){
        if(n == 0){
            return ;
        }
        printnum(n-1);
        System.out.println(n);
    }

    public static void main(String[] str){
        printnum(5);
    }
}

*/
//print n to 1
public class print1ton {
    static void printnum(int n){
        if(n == 0){
            return ;
        }
        System.out.println(n);
        printnum(n-1);
    }

    public static void main(String[] str){
        printnum(5);
    }
}

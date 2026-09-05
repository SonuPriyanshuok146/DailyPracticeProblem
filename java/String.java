/*
// Scanner
import java.util.Scanner;

class Summation{
    public static void main(String[] args){
        int a,b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        a = sc.nextInt();
        System.out.println("Enter next number: ");
        b = sc.nextInt();
        System.out.println(a+b);
        sc.close()
    }
}
*/

/*
class HeapString{
    public static void main(String[] args){
        String s1 = "hello";
        String s2 = new String("hello");
        String s3 = "hello";
        String s4 = new String("hello");

        System.out.println(s1 == s3);   //true
        System.out.println(s1 == s2);   //false
        System.out.println(s2 == s4);   //false
        System.out.println(s1.equals(s2)); //true
        System.out.println(s1.equals(s3)); //true


        //string is immutable
        
        // String a = "Balance ";
        // a.concat("Yourself!");
        // System.out.println(a);
         

        String a = "Balance ";
        a = a.concat("Yourself!");
        System.out.println(a);

        String c = "java";
        String d = "Java";

        System.out.println(c.equals(d));
        System.out.println(c.equalsIgnoreCase(d));

        String e = "banana";
        System.out.println(e.length());
        System.out.println(e.charAt(1));
        System.out.println(e.substring(2));
        System.out.println(e.substring(2,4));
        System.out.println(e.indexOf("ana"));
        System.out.println(e.lastIndexOf("ana"));
    }
}
*/

/*
class ConversionSC{
    public static void main(String[] args){
        // char[] arr = {'H', 'e', 'l', 'l', 'o'};
        // String s1 = new String(arr);

        String s1 = "Java Programming";
        System.out.println(s1.startsWith("Java"));
        System.out.println(s1.endsWith("ming"));

        String s2 = "   Java   ";
        System.out.println(s2.trim());
    }
}

*/

class StringBuilderDemo {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        sb.append("Java");
        sb.append(" ");
        sb.append("Programming");

        System.out.println(sb.toString()); // Output: Java Programming
    }
}


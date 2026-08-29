/*
class Operator {
    public static void main(String[] args) {
        int a = 10;
        int b = 3;
        System.out.println(a + b);  // Addition
        System.out.println(a - b);  // Subtraction
        System.out.println(a * b);  // Multiplication
        System.out.println(a / b);  // Division
        System.out.println(a % b);  // Modulus
    }
}
*/

/*
class Unary {
    public static void main(String[] args){
        int a = 7;
        int b = -a;
        int c = a++; //post increment
        int d = ++a; //pre increment
        int e = a--; //post decrement
        int f = --a; //pre decrement
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
        System.out.println(f);
    }
}
*/

/*
class Relational{
    public static void main(String[] args){
        int a = 10, b = 3;
        System.out.println(a > b);
        System.out.println(a < b);
        System.out.println(a >= b);
        System.out.println(a <= b);
        System.out.println(a == b);
        System.out.println(a != b);
    }
}
*/

/*
class Logical{
    public static void main(String[] args){
        int a = 5, b = 10;
        System.out.println(a<4 && b<8);
        System.out.println(a<4 && b>8);
        System.out.println(a>4 && b<8);
        System.out.println(a>4 && b>8);
    }
}
*/


/*
class SortCircuit{
    public static void main(String[] args){
        int a = 7, b = 4;
        System.out.println(a<5 && ++b>3);
        System.out.println(b);
    }
}
*/

/*
class LogicalOr{
    public static void main(String[] str){
        int a = 5, b = 10;
        System.out.println(a < 4 || b < 8);
        System.out.println(a < 4 || b > 8);
        System.out.println(a > 4 || b < 8);
        System.out.println(a > 4 || b > 8);
    }
}
*/

/*
class ShortCircuit{
    public static void main(String[] str){
        int a = 7, b = 4;
        System.out.println(a > 6 || ++b < 2);
        System.out.println(b);
    }
}
*/


/*
class LogicalNot{
    public static void main(String[] str){
        boolean x = true;
        System.out.println(!x);
        int age = 16;
        System.out.println(!(age > 15));
    }
}
*/


/*
class Assignment{
    public static void main(String[] str){
        int a = 20;
        a += 10;
        a -= 5;
        a *= 2;
        a /= 5;
        a %= 3;
        System.out.println(a);
    }
}
*/


/*
class Bitwise{
    public static void main(String[] args){
        System.out.println(5&3);
        System.out.println(5|3);
        System.out.println(5^3);
        System.out.println(~(10));
        System.out.println(~(12));
        System.out.println(~(-11));
    }
}
*/


class BitwiseShift{
    public static void main(String[] args){
        System.out.println(2 << 3);
        System.out.println(32 >> 2);
    }
}

/*
class greeting{
    static void greet(){
        System.out.println("Hello");
    }

    public static void main(String [] args){
        greet();
        greet();
    }
}
*/

/*
class greeting{
    static void greet(String name){
        System.out.println("Hello " + name);
    }

    public static void main(String [] args){
        greet("Priyanshu");
        greet("Sonu");
    }
}
*/



class greeting{
    static int fact(int n){
        int temp = 1;
        while(n > 0){
            temp *= n;
            n--;
        }
        return temp;
    }

    public static void main(String [] args){
        int x = fact(5);
        System.out.println(x);
    }
}
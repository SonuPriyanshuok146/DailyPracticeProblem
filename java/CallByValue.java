class CallByValue {
    static void change(int a){
        a = 100;
    }
    static void newarray(int [] arr){
        arr[0] = 100;
    }

    public static void main(String [] arg){
        int x = 15;
        change(x);
        System.out.println(x);
        int []a = {10,20,30};
        newarray(a);
        System.out.println(a[0]);
    }
}

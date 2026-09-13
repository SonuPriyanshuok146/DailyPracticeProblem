class factorialfun{
    int factorial(int n){
        int temp = 1;
        while(n > 0){
            temp *= n;
            n--;
        }
        return temp;
    }

    public static void main(String [] args){
        factorialfun obj = new factorialfun();
        int x = obj.factorial(5);
        System.out.println(x);
    }
}

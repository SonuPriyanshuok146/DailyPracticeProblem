class Threedot {
    static int totalmarks(int... marks){
        int total = 0;
        for(int x : marks){
            total += x;
        }
        return total;
    }
    public static void main(String[] args){
        System.out.println(totalmarks(49,91,62,72));
        System.out.println(totalmarks(100,50));
    }
}

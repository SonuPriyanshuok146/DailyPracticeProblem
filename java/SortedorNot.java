class SortedorNot {
    static boolean Sorted(int[] arr){

        int n = arr.length;
        for(int i = 0; i < n-1; i++){
            
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        if(Sorted(new int[]{1,2,3,7,5})){
            System.out.println("Sorted.");
        }else{
            System.out.println("Not Sorted.");
        }
    }
}


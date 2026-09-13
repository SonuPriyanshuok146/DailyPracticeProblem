/*
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


*/


class VowelInString {
    static int VowelCount(String str){
        int vowel = 0;
        // for(char x : str.toLowerCase().toCharArray()){
        //     if(x == 'a' || x=='e'||x=='i'||x=='o'||x=='u'){
        //         vowel++;
        //     }
        // }

        for(int i = 0; i < str.length(); i++){
            char x = Character.toLowerCase(str.charAt(i));
            if(x == 'a' || x=='e'||x=='i'||x=='o'||x=='u'){
                vowel++;
            }
        }
        return vowel;
    }
    public static void main(String[] args){
        System.out.println(VowelCount("Priyanshu KUMAR"));
        System.out.println(VowelCount("sonu"));
    }
}

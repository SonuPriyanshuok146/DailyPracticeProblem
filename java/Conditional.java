/*
class IfCondition{
    public static void main(String[] str){
        int age = 19;
        if(age > 18){
            System.out.println("Adult");
        }else{
            System.out.println("Minor");
        }
    }
}
*/


/*
class IfMarks{
    public static void main(String[] str){
        int marks = 76;
        if(marks > 90){
            System.out.println("Grade A");
        }else if(marks > 80){
            System.out.println("Grade C");
        }else if(marks > 70){
            System.out.println("Grade C");
        }else{
            System.out.println("Grade D");
        }
    }
}
*/


class TernaryCondition{
    public static void main(String[] str){
        int age = 17;
        String a = (age > 18) ? "Adult" : "Minor";
        System.out.println(a);
    }
}

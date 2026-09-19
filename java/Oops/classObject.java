package Oops;

class Student{
    int age;
    String name;
    int marks;
    public void display(){
        System.out.println(name);
        System.out.println(age);
        System.out.println(marks);
    }
}

class ObjectUse{
    public static void main(String[] str){
        Student stud1 = new Student();
        Student stud2 = new Student();

        stud1.name = "Sonu";
        stud1.age = 22;
        stud1.marks = 419;
        stud1.display();

        stud2.name = "Priyanshu";
        stud2.age = 20;
        stud2.marks = 457;
        stud2.display();
    }
}
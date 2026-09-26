package Oops;

abstract class Animal{
    abstract void sound();

}

class Cat extends Animal{
    void sound(){
        System.out.print("Meow");
    }
}

class Dog extends Animal{
    void sound(){
        System.out.print("Bark");
    }
}

class Test{
    public static void main(String[] str){
        Animal obj = new Cat();
        obj.sound();
    }
}
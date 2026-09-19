package Oops;

public class Calculator {

    int add(int a, int b) {
        return a + b;
    }

    void display() {
        System.out.println("Hello");
    }

    public static void main(String[] args) {
        Calculator c1 = new Calculator();

        int result = c1.add(3, 4);

        System.out.println(result);

        c1.display();
    }
}
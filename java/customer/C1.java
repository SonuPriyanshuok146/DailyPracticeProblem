package customer;
import bank.Account;

public class C1 {
    public static void main(String[] str){
        Account acc = new Account("PNB", 50000);
        acc.displaybalance();

        acc.deposit(20000);
        acc.displaybalance();
    }
}

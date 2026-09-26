package bank;
public class Account {
    public String accountno;
    public double balance;
    public Account(String accountno, double balance){
        this.accountno = accountno;
        this.balance = balance;
    }
    public void displaybalance(){
        System.out.println("Account No: "+accountno);
        System.out.println("Balance: "+balance);
    }

    public void deposit(double amount){
        balance += amount;
    }
}

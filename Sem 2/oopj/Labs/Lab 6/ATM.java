import java.util.Scanner;

class AtmMachine{
    String name;
    int balance;

    public AtmMachine() {
        String name;
        int balance;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter The Name");
        name = sc.nextLine();
        this.name=name;
        System.out.println("Enter The Balance");
        balance = sc.nextInt();
        this.balance=balance;
    }

    public void withdraw(int balance){
        if(this.balance-balance>1000){
            this.balance-=balance;
        }
        else{
            System.out.println("Insufficient balance");
        }
    }
    
} 

public class ATM {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        AtmMachine atm = new AtmMachine("Yash", 500000);


    }
}

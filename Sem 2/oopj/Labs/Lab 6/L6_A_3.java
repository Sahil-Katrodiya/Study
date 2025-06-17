import java.util.Scanner;
class Bank_Account{
	int accountNo;
	String userName;
	String email;
	String accountType;
	int accountBalance;
	public void getAccountDetails(){
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter Bank Account Number = ");
		int accountNo=sc.nextInt();
		this.accountNo=accountNo;

		System.out.println("Enter User Name = ");
		String userName=sc.next();
		this.userName=userName;

		System.out.println("Enter Email Id = ");
		String email=sc.next();
		this.email=email;

		System.out.println("Enter Account Type = ");
		String accountType=sc.next();
		this.accountType=accountType;

		System.out.println("Enter Account Balance = ");
		int accountBalance=sc.nextInt();
		this.accountBalance=accountBalance;
	}
	public void displayAccountDetails(){
		System.out.println("Accout Number = "+accountNo);
		System.out.println("User Name = "+userName);
		System.out.println("Email = "+email);
		System.out.println("Account Type = "+accountType);
		System.out.println("Account Balance = "+accountBalance);
	}
}
public class L6_A_3{
	public static void main(String[] args){
		Bank_Account b1=new Bank_Account();
		b1.getAccountDetails();
		b1.displayAccountDetails();
	}
}
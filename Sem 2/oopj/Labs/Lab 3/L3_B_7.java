import java.util.Scanner;
public class L3_B_7
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Number ");
		int a=sc.nextInt();
		int rev=0,original=a,rem=0;
		while(a!=0)
		{
			rem=a%10;
			rev=rev*10+rem;
			a=a/10;
		}
		if(original==rev)
		{
			System.out.println("Palindrome Number");
		}
		else 
		{
			System.out.println("Not Palindrome Number");
		}
	}
}
import java.util.Scanner;
public class L2_A_1
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter First Number ");
		int a=sc.nextInt();
		System.out.println("Enter Second Number ");
		int b=sc.nextInt();
		System.out.println(" Enter Operator to Perform enter 1 for Addition 2 for substraction 3 for Multiplication and 4 for Division");
		String c=sc.next();
		if(c.equals("1"))
		{
			System.out.println("Answer = "+(a+b));
		}
		else if(c.equals("2"))
		{
			System.out.println("Answer = "+(a-b));
		}
		else if(c.equals("3"))
		{
			System.out.println("Answer = "+(a*b));
		}
		else
		{
			System.out.println("Answer = "+(a/b));
		}
	}
}
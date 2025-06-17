import java.util.Scanner;
public class L2_A_5
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter First Number ");
		int a=sc.nextInt();
		System.out.println("Enter Second Number ");
		int b=sc.nextInt();
		System.out.println("Enter Third Number ");
		int c=sc.nextInt();
		if(a>b)
		{
			if(a>c)
			{
				System.out.println("Largest Number = "+a);
			}
			else
			{
				System.out.println("Largest Number = "+c);
			}
		}
		else
		{
			if(b>c)
			{
				System.out.println("Largest Number = "+b);
			}
			else
			{
				System.out.println("Largest Number = "+c);
			}
		}
	}
}
import java.util.Scanner;
public class L3_A_5
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter First Number ");
		int a=sc.nextInt();
		int count=0;
		for(int i=2;i<=(a-1);i++)
		{
			if(a%i==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			System.out.println("Prime Number");
		}
		else 
		{
			System.out.println("Not Prime Number");
		}
	}
}
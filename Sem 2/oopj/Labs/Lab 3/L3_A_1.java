import java.util.Scanner;
public class L3_A_1
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Mark of Subject1 Number ");
		int a=sc.nextInt();
		System.out.println("Enter Mark of Subject2 Number ");
		int b=sc.nextInt();
		System.out.println("Enter Mark of Subject3 Number ");
		int c=sc.nextInt();
		System.out.println("Enter Mark of Subject4 Number ");
		int d=sc.nextInt();
		System.out.println("Enter Mark of Subject5 Number ");
		int e=sc.nextInt();
		double total=0;
		total=(a+b+c+d+e)/5;
		if(total>=60)
		{
			System.out.println("First division");
		}
		else if((total>=50)&&(total<=59))
		{
			System.out.println("Second division");
		}
		else if((total>=40)&&(total<=49))
		{
			System.out.println("Third division");
		}
		else
		{
			System.out.println("Fail");
		}
	}
}
// import java.util.Scanner;
// public class L3_A_2
// {
// 	public static void main(String[] args)
// 	{
// 		Scanner	sc=new Scanner(System.in);
// 		System.out.println("Enter First Number ");
// 		int a=sc.nextInt();
// 		if(a%2==0)
// 		{
// 			System.out.println("Even Number");
// 		}
// 		else 
// 		{
// 			System.out.println("Odd Number");
// 		}
// 	}
// }
import java.util.Scanner;
public class L3_A_2
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter First Number ");
		int a=sc.nextInt();
		if((a&1)==0)
		{
			System.out.println("Even Number");
		}
		else 
		{
			System.out.println("Odd Number");
		}
	}
}
import java.util.Scanner;
public class L3_B_6
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Year ");
		int year=sc.nextInt();
		if((year%4==0)&&(year%10!=0)||(year%400==0))
		{
			System.out.println("Leap Year");
		}
		else 
		{
			System.out.println("Not Leap Year");
		}
	}
}
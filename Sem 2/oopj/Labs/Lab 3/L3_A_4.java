import java.util.Scanner;
public class L3_A_4
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
		int d=0;
		d=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
		System.out.println("Largest Number is = "+d);
	}
}
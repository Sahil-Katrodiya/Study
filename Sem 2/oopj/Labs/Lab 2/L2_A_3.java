// import java.util.Scanner;
// public class L2_A_3
// {
// 	public static void main(String[] args)
// 	{
// 		Scanner	sc=new Scanner(System.in);
// 		System.out.println("Enter Fahrenheit ");
// 		double a=sc.nextDouble();
// 		double b=(a-32)*5/9;
// 		System.out.println("Celsius = "+b);
// 	}
// }
import java.util.Scanner;
public class L2_A_3
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Celsius ");
		double a=sc.nextDouble();
		double b=9*a/5+32;
		System.out.println("Fahrenheit = "+b);
	}
}
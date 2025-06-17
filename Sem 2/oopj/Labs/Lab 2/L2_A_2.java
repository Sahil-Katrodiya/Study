import java.util.Scanner;
public class L2_A_2
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Length ");
		double a=sc.nextDouble();
		System.out.println("Enter Width ");
		double b=sc.nextDouble();
		double c=a*b;
		System.out.println("Answer = "+c);
	}
}
import java.util.Scanner;
public class L4_B_4
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter String");
		String str=sc.nextLine();
		int length=str.length();
		System.out.println("String is = ");
		for (int i=length/2;i<length;i++) {
			System.out.print(str.charAt(i)+" ");
		}
	}
}
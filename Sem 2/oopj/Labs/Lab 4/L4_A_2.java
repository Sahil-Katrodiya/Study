import java.util.Scanner;
public class L4_A_2
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Number of Element in Array");
		int a=sc.nextInt();
		int[] arr=new int[a];
		double sum=0;
		for(int i=0;i<arr.length;i++)
		{
			System.out.println("Enter Number");
			arr[i]=sc.nextInt();
			sum+=arr[i];
		}
		double avg=0;
		avg=sum/a;
		System.out.println("Average is = "+avg);
	}
}
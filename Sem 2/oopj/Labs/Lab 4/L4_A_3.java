import java.util.Scanner;
public class L4_A_3
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Number of Element in Array");
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<arr.length;i++)
		{
			System.out.println("Enter Number");
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<((arr.length)/2);i++){
			int temp=arr[i];
			arr[i]=arr[n-i-1];
			arr[n-i-1]=temp;
		}
		System.out.println("Reverse of Array");
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" " );
		}
	}
}
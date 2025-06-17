import java.util.Scanner;
public class L3_B_8
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Starting Range");
		int a=sc.nextInt();
		System.out.println("Enter Ending Range");
		int b=sc.nextInt();
		for(int i=a+1;i<b;i++)
		{
			int count=0;
			for(int j=2;i<=(i-1);j++)
			{
					if(a%i==0)
					{
						count++;
					}
			}
			if(count==0)
			{
				System.out.println(i+" ");
			}
		}		
	}
}
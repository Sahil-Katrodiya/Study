import java.util.Scanner;
public class extra
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter Starting Range");
		int a=sc.nextInt();
		System.out.println("Enter Ending Range");
		int b=sc.nextInt();
		boolean	c=false;
		for(int i=a+1;i<b;i++)
		{
			int count=0;
			for(int j=2;j<=(i-1);j++)
			{
				if(j%i==0)
				{
					c=true;
				}	
			}
			if(c.equalto("false"))
			{
				System.out.println(i+" ");
			}
		}		
	}
}
import java.util.Scanner;
public class L5_B_2
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Number of Row in Pyramid");
		int n=sc.nextInt();
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i;j++){
				System.out.print(" ");
			}
			for(int j=0;j<=i;j++){
				System.out.print("* ");
			}
			System.out.println();
		}
		for(int i=(n-2);i>=0;i--){
			for(int j=0;j<n-i;j++){
				System.out.print(" ");
			}
			for(int j=0;j<=i;j++){
				System.out.print("* ");
			}
			System.out.println();
		}	
	}
}
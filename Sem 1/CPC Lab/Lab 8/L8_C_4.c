#include<stdio.h>
void main()
{
	int N1,N2,sum=0;
	printf("Please note that N1 should be less than N2\n");
	printf("Enter the value of N1 = ");
	scanf("%d",&N1);
	printf("Enter the value of N2 = ");
	scanf("%d",&N2);
	while(N2>0)
	{
		sum=sum+N1;
		N2=N2-1;
	}
	printf("Multiplication = %d",sum);
}

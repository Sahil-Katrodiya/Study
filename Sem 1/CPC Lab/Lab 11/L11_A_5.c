#include<stdio.h>
void main()
{
	int n,i=1,sum=1;
	printf("Enter the value of N = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("Factorial = %d",sum);
}

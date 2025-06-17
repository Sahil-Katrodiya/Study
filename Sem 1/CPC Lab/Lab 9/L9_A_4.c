#include<stdio.h>
void main()
{
	int n,i=1,sum=1;
	printf("Enter the value of N = ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum*i;
		i++;
	}
	printf("Factorial = %d",sum);
}

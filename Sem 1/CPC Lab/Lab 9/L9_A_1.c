#include<stdio.h>
void main()
{
	int n,i=1,a=0,b=0,sum=0;
	printf("Enter the value of N = ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			a=a-i;
		}
		else
		{
			b=b+i;
		}
		i++;
	}
	sum=a+b;
	printf("Sum = %d",sum);
}

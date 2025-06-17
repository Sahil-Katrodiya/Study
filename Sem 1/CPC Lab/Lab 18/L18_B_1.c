#include<stdio.h>
int fib(int n);
void main()
{
	int n,i;
	printf("Enter the teams in fibonacci series = ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf(" %d",fib(i));
	}
}
int fib(int n)
{
	if((n==1)||(n==2))
	{
		return (n-1);
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}

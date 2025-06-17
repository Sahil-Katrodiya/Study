#include<stdio.h>
int factF(int n);
int factR(int n);
void main()
{
	int n,res1,res2;
	printf("Enter a number ");
	scanf("%d",&n);
	res1=factF(n);
	res2=factR(n);
	printf("Factorial using function is = %d",res1);
	printf("\nFactorial using recursion is = %d",res2);
}
int factF(int n)
{
	int i,res=1;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}
int factR(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*factR(n-1);
	}
}

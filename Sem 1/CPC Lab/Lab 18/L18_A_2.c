#include<stdio.h>

int min(int,int);
void main()
{
	int a,b,ma,mi;
	printf("Enter the value of Number1 = ");
	scanf("%d",&a);
	printf("Enter the value of Number2 = ");
	scanf("%d",&b);
	ma=max(a,b);
	mi=min(a,b);
	printf("Maximum is = %d",ma);
	printf("\nMinimum is = %d",mi);
}
int max(int a,int b)
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int min(int a,int b)
{
	if (a>b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

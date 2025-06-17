#include<stdio.h>
void main()
{
	int n,i,a;
	printf("Enter the value of N = ");
	scanf("%d",&n);
	a=n%10;
	while(n>9)
	{
		n=n/10;
	}
	printf("%d",a+n);
}

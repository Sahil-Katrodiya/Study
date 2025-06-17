#include<stdio.h>
void main()
{
	int n,i=0,a=0;
	printf("Enter the value of N = ");
	scanf("%d",&n);
	while(i<=n)
	{
		a=a+(i*i);
		i++;
	}
	printf("Sum is = %d",a);
}

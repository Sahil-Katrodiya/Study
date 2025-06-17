#include<stdio.h>
void main()
{
	int a,i,sum=0;
	printf("Enter the value of N = ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("Sum is = %d",sum);
}

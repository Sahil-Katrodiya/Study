#include<stdio.h>
void main()
{
	int a,i=1,sum=0;
	printf("Enter the value of N = ");
	scanf("%d",&a);
	while(i<=a)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("Sum is = %d",sum);
}

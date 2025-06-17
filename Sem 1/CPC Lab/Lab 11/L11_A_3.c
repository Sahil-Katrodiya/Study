#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the value of N for multiplication table = ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		sum=sum+n;
		printf("%d * %02d = %02d\n",n,i,sum);
	}
}

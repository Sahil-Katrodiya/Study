#include<stdio.h>
void main()
{
	int b,p,i,j,s=0,sum=0;
	printf("Enter the base = ");
	scanf("%d",&b);
	printf("Enter the power = ");
	scanf("%d",&p);
	for(i=0;i<b;i++)
	{
		for(j=0;j<p-1;j++)
		{
			s=s+b;
			sum=sum+s;
		}
	}
	printf("%d",sum);
}

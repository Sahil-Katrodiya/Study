#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the number A = ");
	scanf("%d",&a);
	printf("Enter the number B = ");
	scanf("%d",&b);
	printf("Enter the number C = ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				printf("B is second largest number = %d",b);
			}
		}
		else
		{
			printf("A is second largest number = %d",a);
		}
	}
	else
	{
		if(b>c)
		{
			if(a>c)
			{
				printf("A is second largest number = %d",a);
			}
			else
			{
				printf("C is second largest number = %d",c);
			}
		}
		else
		{
			printf("B is second largest number = %d",b);
		}
	}
}

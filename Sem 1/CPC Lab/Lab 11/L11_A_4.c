#include<stdio.h>
void main()
{
	int a,b,i=1,sum=1;
	printf("Here a and b are in form of a^b\n");
	printf("Enter the value of base = ");
	scanf("%d",&a);
	printf("Enter the value of power = ");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		sum=sum*a;
	}
	printf("Answer = %d",sum);
}

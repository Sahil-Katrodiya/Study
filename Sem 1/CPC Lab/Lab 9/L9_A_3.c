#include<stdio.h>
void main()
{
	int a,b,i=1,sum=1;
	printf("Here a and b are in form of a^b\n");
	printf("Enter the value of a = ");
	scanf("%d",&a);
	printf("Enter the value of b = ");
	scanf("%d",&b);
	while(i<=b)
	{
		sum=sum*a;
		i++;
	}
	printf("Answer = %d",sum);
}

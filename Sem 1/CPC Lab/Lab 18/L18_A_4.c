#include<stdio.h>
float max(float a,float b,float c)
{
	if(a>b)
	{
		if(a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}
void main()
{
	float a,b,c,m;
	printf("Enter the value of Number 1 = ");
	scanf("%f",&a);
	printf("Enter the value of number 2 = ");
	scanf("%f",&b);
	printf("Enter the value of number 3 = ");
	scanf("%f",&c);
	m=max(a,b,c);
	printf("%f",m);
}

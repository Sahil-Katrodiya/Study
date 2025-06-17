#include<stdio.h>
float interest(float p,float r,float t)
{
	float a;
	a=(float)(p*r*t)/100;
	return a;
}
void main()
{
	float SI,p,r,t;
	printf("Enter the principle amount = ");
	scanf("%f",&p);
	printf("\nEnter the Rate of Interest = ");
	scanf("%f",&r);
	printf("\nEnter the Time Period = ");
	scanf("%f",&t);
	SI=interest(p,r,t);
	printf("Simple Interest = %f",SI);
}

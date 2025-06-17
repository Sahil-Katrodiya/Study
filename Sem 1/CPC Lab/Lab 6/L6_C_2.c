#include<stdio.h>
void main()
{
	float r,g,b,w,c,m,y,k,max;
	printf("Enter the value of R (on scale of 0 to 255) =");
	scanf("%f",&r);
	printf("Enter the value of G (on scale of 0 to 255) =");
	scanf("%f",&g);
	printf("Enter the value of B (on scale of 0 to 255) =");
	scanf("%f",&b);
	if (r>g)
	{
		if (r>b)
		{
			max=r;
		}
		else 
		{
			max=b;
		}
	}
	else 
	{
		if (g>b)
		{
			max=g;
		}
		else
		{
			max=b;
		}
	}
	w=max/255;
	c=(w-(r/255))/w;
	m=(w-(g/255))/w;
	y=(w-(b/255))/w;
	k=1-w;
	printf("W = %f",w);
	printf("\nC = %f",c);
	printf("\nM = %f",m);
	printf("\nY = %f",y);
	printf("\nK = %f",k);
}

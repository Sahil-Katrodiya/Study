#include<stdio.h>
void main()
{
	int a,b,i;
	printf("N1 < N2");
	printf("\nEnter the value of N1 = ");
	scanf("%d",&a);
	printf("Enter the value of N2 = ");
	scanf("%d",&b);
	i=a+1;
	while(i<b)
	{
		if(i%2==0)
		{
			printf(" %d",i);
		}
		i++;
	}
}

#include<stdio.h>
void main()
{
	int a,i=0;
	printf("Enter the value of N = ");
	scanf("%d",&a);
	while(i<=a)
	{
		if(i%2!=0)
		{
			printf(" %d ",i);
		}
		i++;
	}

}

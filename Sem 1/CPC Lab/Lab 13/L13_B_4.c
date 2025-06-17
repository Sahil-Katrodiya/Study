#include<stdio.h>
void main()
{
	int i,j,n=5,m=1;
	char ch='A';
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==1)
			{
				printf(" %2d ",m);
				m++;
			}
			else
			{
				printf(" %2c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}

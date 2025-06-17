#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1)||(i==n)||(j==1)||(j==3))
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
}

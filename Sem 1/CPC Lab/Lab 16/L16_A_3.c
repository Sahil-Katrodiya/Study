#include<stdio.h>
void main()
{
	int a[20][2],i,j;
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the roll no. = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}	
}

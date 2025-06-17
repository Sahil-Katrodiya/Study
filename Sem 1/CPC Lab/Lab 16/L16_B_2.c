#include<stdio.h>
void main()
{
	int i,j,k,row,col;
	printf("Enter the number of Rows = ");
	scanf("%d",&row);
	printf("Enter the number of Columns = ");
	scanf("%d",&col);
	int a[row][col],b[row][col],c[row][col];
	printf("Enter the element of First matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element = ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the element of Second matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element = ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=0;
			for(k=0;k<row;k++)
			{
				
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

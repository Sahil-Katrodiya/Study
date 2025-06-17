#include<stdio.h>
void main()
{
	int row,col,i,j;
	printf("Enter the Rows of Matrix = ");
	scanf("%d",&row);
	printf("Enter the Columns of Matrix = ");
	scanf("%d",&col);
	int a[row][col];
	int b[row][col];
	int c[row][col];
	printf("Enter the element of First matrix");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
}

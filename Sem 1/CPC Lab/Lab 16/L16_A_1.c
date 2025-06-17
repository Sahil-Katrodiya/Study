#include<stdio.h>
void main()
{
	int rows,cols,i,j;
	printf("Enter the number of Rows ");
	scanf("%d",&rows);
		printf("Enter the number of Columns ");
	scanf("%d",&cols);
	int a[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("Enter the element = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
void main()
{
	int row,i,j,sum=0;
	printf("Enter the value of row of square matrix = ");
	scanf("%d",&row);
	int a[row][row];
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("Enter the elements of Matrix = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		printf("Diagonal element is = %d\n",a[i][i]);
		sum=sum+a[i][i];
	}
	printf("Sum of Diagonal element is = %d",sum);
}

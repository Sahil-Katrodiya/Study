#include<stdio.h>
void main()
{
	int i,j,c1=0,c2=0,c3=0;
	int a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				c1++;
			}
			else if(a[i][j]>0)
			{
				c2++;
			}
			else
			{
				c3++;
			}
		}
	}
	printf("Count of Zero = %d\n",c1);
	printf("Count of Positive = %d\n",c2);
	printf("Count of Negative = %d\n",c3);
}

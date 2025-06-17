#include<stdio.h>
void main()
{
	int n,i=1,sum=0,count=0;
	float avg;
	char a;
	while(1)
	{
		printf("Enter the value of N = ");
		scanf("%d",&n);
		sum=sum+n;
		count++;
		printf("You want to enter another no Y for Yes and N for No = ");
		scanf(" %c",&a);
		if(a=='N')
		{
			break;
		}
	}
	avg=(float)sum/count;
	printf("Sum is  = %d",sum);
	printf("Average is = %f",avg);
}

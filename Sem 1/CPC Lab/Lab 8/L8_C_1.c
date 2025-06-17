#include<stdio.h>
void main()
{
	int a=1,n=1;
	float sum=0,avg;
	while(a<=10)
	{
		if(((n*n)%10)==3)
		{
			sum=sum+(n*n);
			a++;
		}
		n++;
	}
	avg=sum/10;
	printf("Sum = %.3f\n",sum);
	printf("average = %d",avg);
}

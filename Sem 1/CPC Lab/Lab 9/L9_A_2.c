#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	printf("Enter the value of N for multiplication table = ");
	scanf("%d",&n);
	while(i<=10)
	{
		sum=sum+n;
		printf("%d * %02d = %02d\n",n,i,sum);
		i++;
	}
}

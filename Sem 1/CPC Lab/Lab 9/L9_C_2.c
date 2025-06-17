#include<stdio.h>
void main()
{
	int n,rem=0;
	printf("Enter the value of N = ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		printf("%d",rem);
		n=n/2;
	}
}

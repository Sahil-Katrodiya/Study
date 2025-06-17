#include<stdio.h>
void main()
{
	int n,rem=0,rev=0,i;
	printf("Enter the value of N");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	while(rev!=0)
	{
		i=rev%10;
		printf("%d\n",i);
		rev=rev/10;
	}
}

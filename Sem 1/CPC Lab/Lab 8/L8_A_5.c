#include<stdio.h>
void main()
{
	int a=1,count1=0,count2=0,n;
	while(a<=10)
	{
		printf("Enter the value of N = ");
		scanf("%d",&n);
		if(n%2==0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
		a++;
	}
	printf("Count of Even numbers are = %d",count1);
	printf("\nCount of Odd numbers are = %d",count2);
}

#include<stdio.h>
void main()
{
	int N1,N2,q=0,r=0,a;
	printf("Please note that N1 should be less than N2\n");
	printf("Enter the value of N1 = ");
	scanf("%d",&N1);
	printf("Enter the value of N2 = ");
	scanf("%d",&N2);
	a=N2;
	while(N2>N1)
	{
		N2=N2-N1;
		q++;
	}
	r=a-(q*N1);
	printf("Quotient = %d",q);
	printf("\nReminder = %d",r);
}

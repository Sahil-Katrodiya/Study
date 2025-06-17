#include<stdio.h>
void Swapno(int *p1,int *p2);
void main()
{
	int a,b;
	printf("Enter the first number = ");
	scanf("%d",&a);
	printf("Enter the second number = ");
	scanf("%d",&b);
	Swapno(&a,&b);
	printf("%d %d",a,b);
}
void Swapno(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

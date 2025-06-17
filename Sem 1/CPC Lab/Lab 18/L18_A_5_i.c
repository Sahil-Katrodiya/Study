#include<stdio.h>
void Swapno(int x,int y);
void main()
{
	int a,b;
	printf("Enter the first number = ");
	scanf("%d",&a);
	printf("Enter the second number = ");
	scanf("%d",&b);
	Swapno(a,b);
}
void Swapno(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("%d %d",x,y);
}

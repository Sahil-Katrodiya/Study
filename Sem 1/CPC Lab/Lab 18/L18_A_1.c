#include<stdio.h>
int add(int,int);
void main()
{
	int a,b,res;
	printf("Enter the value of Number1 = ");
	scanf("%d",&a);
	printf("Enter the value of Number2 = ");
	scanf("%d",&b);
	res=add(a,b);
	printf("Addition is = %d",res);
}
int add(int a,int b)
{
	int res;
	res=a+b;
	return res;
}

#include<stdio.h>
  void main()
  {
	int a,b;
  	printf("Enter the Number1 = ");
  	scanf("%d",&a);
  	printf("Enter the Number1 = ");
  	scanf("%d",&b);
  	int *p;
  	int *ptr;
  	p=&a;
  	ptr=&b;
	printf("%d",*p+*ptr);
  }


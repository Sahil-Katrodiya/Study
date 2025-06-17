#include<stdio.h>
  void main()
  {
	int a,b;
  	printf("Enter the Number1 = ");
  	scanf("%d",&a);
  	printf("Enter the Number2 = ");
  	scanf("%d",&b);
  	int *p;
  	int *ptr;
  	p=&a;
  	ptr=&b;
  	*p=*p+*ptr;
  	*ptr=*p-*ptr;
  	*p=*p-*ptr;
  	printf("%d %d",*p,*ptr);
  }


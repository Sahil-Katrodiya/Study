#include<stdio.h>
  void main()
  {
	int a;
  	printf("Enter the Number = ");
  	scanf("%d",&a);
  	int *p;
  	p=&a;
  	printf("%d %d",*p,p);
  }


#include<stdio.h>
  void main()
  {
  	int a;
  	printf("Enter the Integer = ");
  	scanf("%d",&a);
  	int *p;
  	p=&a;
  	printf("%d %d\n",*p,p);
  	float b;
  	printf("Enter the Float no.= ");
  	scanf("%f",&b);
  	float *po;
  	po=&b;
  	printf("%f %d\n",*po,po);
  	double c;
  	printf("Enter the Double  = ");
  	scanf("%lf",&c);
  	double *poi;
  	poi=&c;
  	printf("%lf %d\n",*poi,poi);
  	char d;
  	printf("Enter the Character = ");
  	scanf(" %c",&d);
  	char *poin;
  	poin=&d;
  	printf("%c %d",*poin,poin);
  }


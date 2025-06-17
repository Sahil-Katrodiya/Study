#include<stdio.h>
  void main()
  {
  	int i,size;
  	printf("Enter the size of array = ");
  	scanf("%d",&size);
  	int a[size];
  	for(i=0;i<size;i++)
  	{
  		printf("Enter the value of array element a[%d] = ",i);
  		scanf("%d",&a[i]);
	}
	int *p;
	p=&a[0];
	for(i=0;i<size;i++)
	{
		printf(" %d ",*(p+i));
	}
  }


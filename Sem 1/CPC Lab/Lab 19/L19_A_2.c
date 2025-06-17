#include<stdio.h>
void printArray(int a[],int size);
void main()
{
	int size,i;
	printf("Enter the size of an Array = ");
	scanf("%d",&size);
	int a[size];
	for (i=0;i<size;i++)
	{
		printf("Enter Array element a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printArray(a,size);
}
void printArray(int a[],int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}

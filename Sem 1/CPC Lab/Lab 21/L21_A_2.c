#include<stdio.h>
#include<string.h>
struct book
{
	char title[100];
	char author[100];
	char publication[100];
	float price;
};
void main()
{
	struct book b[3];
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("Enter The Title = ");
		scanf(" %s",b[i].title);
		printf("Enter The Author = ");
		scanf(" %s",b[i].author);
		printf("Enter The Publication = ");
		scanf(" %s",b[i].publication);
		printf("Enter The Price = ");
		scanf("%f",&b[i].price);
	}
	for(i=0;i<3;i++)
	{
		printf("Book %d",i);
		printf("Book Title : %s",b[i].title);
		printf("Book Author : %s",b[i].author);
		printf("Book Publication : %s",b[i].publication);
		printf("Book Price : %f",b[i].price);
	}
}

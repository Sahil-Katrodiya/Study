#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int age;
	float per;
};
void main()
{
	struct student b[5];
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("Enter The Name = ");
		scanf(" %s",b[i].name);
		printf("Enter The Age = ");
		scanf(" %d",&b[i].age);
		printf("Enter The Per = ");
		scanf(" %f",&b[i].per);
	}
	for(i=0;i<3;i++)
	{
		printf("Student %d",i);
		printf("Student Name : %s",b[i].name);
		printf("Student Age : %d",b[i].age);
		printf("Student Percentage : %f",b[i].per);
	}
}

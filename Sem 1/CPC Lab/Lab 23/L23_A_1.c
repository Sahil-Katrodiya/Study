#include<stdio.h>
struct student
{
	int roll;
	char name[100];
	int ba;
};
void main()
{
	FILE *fp;
	fp=fopen("Student.txt","a");
	int size;
	printf("Enter How many Student data you have = ");
	scanf("%d",&size);
	struct student s[size];
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter the Roll no of student ");
		scanf(" %d",&s[i].roll);
		printf("Enter the Name of student ");
		scanf(" %s",s[i].name);
		printf("Enter the Backlogs of student ");
		scanf(" %d",&s[i].ba);
	}
	for(i=0;i<size;i++)
	{
		fprintf(fp,"%d %s %d\n",s[i].roll,s[i].name,s[i].ba);
	}
	fclose(fp);
}

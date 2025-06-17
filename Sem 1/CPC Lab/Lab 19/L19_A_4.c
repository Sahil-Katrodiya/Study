#include<stdio.h>
void findChar(char a[],char b);
void main()
{
	char a[100];
	printf("Enter the string = void findChar(char a[],char b)");
	gets(a);
	char b;
	printf("Enter a Character to compare = ");
	scanf("%c",&b);
	findChar(a,b);
}
void findChar(char a[],char b)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(b==a[i])
		{
			printf(" %d \n",i);
		}
	}
}

#include<stdio.h>
void findChar(char a[],char b,char c);
void main()
{
	char a[100];
	printf("Enter the string = ");
	gets(a);
	char b,c;
	printf("Enter a Character to compare = ");
	scanf("%c",&b);
	printf("Enter a charactrer to replace above character = ");
	scanf(" %c",&c);
	//getchar();
	findChar(a,b,c);
	printf("%s",a);
}
void findChar(char a[],char b,char c)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			a[i]=c;
		}
	}
}

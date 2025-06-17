#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	printf("Enter an string = ");
	gets(s1);
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		s2[i]=s1[l-i-1];
	}
	s2[i]='\0';
	int a=strcmp(s1,s2);
	if(a==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}

#include<stdio.h>
#include<string.h>
void stringFunction(char s1[],char s2[]);
void main()
{
	char str1[100],str2[100];
	printf("Enter the String1 = ");
	gets(str1);
	printf("Enter the String2 = ");
	gets(str2);
	stringFunction(str1,str2);
}
void stringFunction(char s1[],char s2[])
{
	char s3[100],s4[100];
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		s3[i]=s1[i];
	}
	s3[i]='\0';
	// string length
	printf("Length of String1 = %d\n",strlen(s1));
	printf("Length of String2 = %d\n",strlen(s2));
	//string comparision
	if(strcmp(s1,s2)==0)
	{
		printf("Strings are equal\n");
	}
	else
	{
		printf("Strings are not equal\n");
	}
	//string copy
	printf("%s\n",strcpy(s3,s2));
	// string cattanation
	for(i=0;s1[i]!='\0';i++)
	{
		s3[i]=s1[i];
	}
	s3[i]='\0';
	printf("%s\n",strcat(s3,s2));
	// string reverse
	for(i=0;s1[i]!='\0';i++)
	{
		s3[i]=s1[i];
	}
	s3[i]='\0';
	for(i=0;s2[i]!='\0';i++)
	{
		s4[i]=s2[i];
	}
	s4[i]='\0';
	printf("Reverse of Srtring1 %s\n",strrev(s3));
	printf("Reverse of Srtring2 %s\n",strrev(s4));
	// string lower case and upper case
	printf("Lower case of string1 %s\n",strlwr(s1));
	printf("Upper case of string1 %s\n",strupr(s1));
	printf("Lower case of string2 %s\n",strlwr(s2));
	printf("Upper case of string2 %s\n",strupr(s2));
}

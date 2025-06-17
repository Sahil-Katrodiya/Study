#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	char *ptr=s1,*ptr1=s2;
	printf("Enter an String = ");
	gets(s1);
	int i,l,j=0;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		if(((*(ptr+i)>='a')&&(*(ptr+i)<='z'))||((*(ptr+i)>='A')&&((*(ptr+i)<='Z')))||((*(ptr+i)>='0')&&((*(ptr+i)<='9'))))
		{
			*(ptr1+j)=*(ptr+i);
			j++;
		}
	}
	s2[j]='\0';
	printf("%s",s2);
}

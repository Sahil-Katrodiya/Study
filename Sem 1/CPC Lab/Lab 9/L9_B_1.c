#include<stdio.h>
void main()
{
	char ch1='A',ch2='a';
	while((ch1>='A' && ch1<='Z') || (ch2>='a' && ch2<='z'))
	{
		printf("%c",ch1);
		printf("%c\n",ch2);
		ch1++;
		ch2++;
	}
}

#include<stdio.h>
void main()
{
	FILE *fp1;
	fp1=fopen("file.txt","r");
	char c=getc(fp1);
	int space=0,ch=0,tab=0,new=0;
	while(c!=EOF)
	{
		if(c==' ')
		{
			space++;
		}
		else if(c=='\t')
		{
			tab++;
		}
		else if(c=='\n')
		{
			new++;
		}
		else
		{
			ch++;
		}
		c=getc(fp1);
	}
	printf("\nNumber of Spaces = %d",space);
	printf("\nNumber of Tab = %d",tab);
	printf("\nNumber of New = %d",new);
	printf("\nNumber of Char = %d",ch);
	fclose(fp1);
}

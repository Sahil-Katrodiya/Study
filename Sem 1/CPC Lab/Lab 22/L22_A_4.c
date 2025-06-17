#include<stdio.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("file.txt","r");
	fp2=fopen("file1.txt","a");
	char ch;
	while((ch=getc(fp1))!=EOF)
	{
		
		putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fp3=fopen("file1.txt","r");
	char ch1;
	
	while((ch1=getc(fp3))!=EOF)
	{
		printf("%c",ch1);
		//ch1=getc(fp2);
	}
	

	fclose(fp3);
}

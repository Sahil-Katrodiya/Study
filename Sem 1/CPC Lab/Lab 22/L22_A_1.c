#include<stdio.h>
void main()
{
	FILE *fp1;
	fp1=fopen("file.txt","w");
	
	fclose(fp1);
}

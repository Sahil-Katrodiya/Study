#include<stdio.h>
void main()
{
	int a,y;
	printf("Enter the month number = ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 Days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 Days");
			break;
		case 2:
			printf("Enter the Year = ");
			scanf("%d",&y);
			if((y%4==0&& y%100!=0) || (y%400==0))
			{		
				printf("29 Days");
			}
			else
			{
				printf("28 Days");
			}
	}
}

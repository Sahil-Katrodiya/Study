#include<stdio.h>
int main(){
	int year;
	printf("Enter Year to find it is Leap year or not = ");
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0))||(year%400==0)){
		printf("%d is a Leap year",year);
	}
	else{
		printf("%d is not a Leap year",year);
	}
	return 0;
}

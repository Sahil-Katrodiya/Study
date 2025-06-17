#include<stdio.h>
int main(){
	int day,week=0,year=0;
	printf("Enter Days to convert it into Years Weeks Days format = ");
	scanf("%d",&day);
	while(day>=7){
		if(day>=365){
			day-=365;
			year++;
		}
		else if(day>=7){
			day-=7;
			week++;		
		}
	}
	printf("%d Years %d Weeks %d Days",year,week,day);
	return 0;
}

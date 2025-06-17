#include<stdio.h>
int main(){
	int second,minute=0,hour=0;
	printf("Enter Seconds to convert it into hour minute seconds format = ");
	scanf("%d",&second);
	while(second>=60){
		minute++;
		second-=60;			
		while(minute>=60){
			hour++;
			minute-=60;
		}
	}
	printf("%d %d %d",hour,minute,second);
	return 0;
}

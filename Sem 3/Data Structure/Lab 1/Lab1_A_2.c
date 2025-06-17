#include<stdio.h>
int main(){
	int number;
	printf("Enter Number to check whether it is Even or Odd = ");
	scanf("%d",&number);
	if (number%2==0){
		printf("%d is an Even Number",number);
	}
	else{
		printf("%d is an Odd Number",number);	
	}
	return 0;
}

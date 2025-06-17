#include<stdio.h>
int main(){
	int number1;
	int number2;
	int number3;
	printf("Enter Number1  = ");
	scanf("%d",&number1);
	printf("Enter Number2  = ");
	scanf("%d",&number2);
	printf("Enter Number3  = ");
	scanf("%d",&number3);
	if (number1>number2){
		if(number1>number3){
			printf("Number1 is Largest");
		}
		else{
			printf("Number3 is Largest");
		}
	}
	else{
		if(number2>number3){
			printf("Number2 is Largest");
		}
		else{
			printf("Number3 is Largest");
		}		
	}
	return 0;
}

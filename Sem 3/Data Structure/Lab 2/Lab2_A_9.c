#include<stdio.h>
int main(){
	int number1,number2,i,answer=1;
	printf("Enter Base = ");
	scanf("%d",&number1);
	printf("Enter power = ");
	scanf("%d",&number2);
	for(i=1;i<=number2;i++){
		answer*=number1;
	}
	printf("Power of number = %d",answer);
	return 0;
}

#include<stdio.h>
int main(){
	int number,reverse;
	printf("Enter number to find revrese of it = ");
	scanf("%d",&number);
	while(number!=0){
		int reminder=number%10;
		reverse=reverse*10+reminder;
		number/=10;
	}
	printf("Reverse of number = %d",reverse);
	return 0;
}

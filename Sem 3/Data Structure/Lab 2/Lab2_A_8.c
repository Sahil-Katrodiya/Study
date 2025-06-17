#include<stdio.h>
int factorial(int n);
int main(){
	int number,i,fact1=1,fact2;
	printf("Enter number to find factorial = ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		fact1*=i;
	}
	printf("Factorial through Loop = %d\n",fact1);
	fact2=factorial(number);
	printf("Factorial through Recurtion = %d",fact2);
	return 0;
}
int factorial(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}

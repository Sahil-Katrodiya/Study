#include<stdio.h>
int main(){
	int number,i,count=0;
	printf("Enter number to find wheather it is prime or not of it = ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		if(number%i==0){
			count++;
		}
	}
	if(count==2){
		printf("Number is Prime Number");
	}
	else{
		printf("Number is not an Prime Number");
	}
	return 0;
}

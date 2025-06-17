#include<stdio.h>
int main(){
	int number1,number2,i,j,max,min;
	printf("Enter number1 = ");
	scanf("%d",&number1);
	printf("Enter number2  = ");
	scanf("%d",&number2);
	if(number1>number2){
		max=number1;
		min=number2;
	}
	else if(number1<number2){
		max=number2;
		min=number1;
	}
	else{
		printf("Both Number are same");
	}
	for(i=min+1;i<=max-1;i++){
		int count=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==0){
			printf("%d\n",i);
		}
	}
	return 0;
}

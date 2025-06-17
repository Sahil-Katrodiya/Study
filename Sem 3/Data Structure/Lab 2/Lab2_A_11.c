#include<stdio.h>
int main(){
	int number,i,count=0;
	printf("Enter number to find Factors of it = ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		if(number%i==0){
			printf("%d\n",i);
			count++;
		}
	}
	printf("Number of Factors = %d",count);
	return 0;
}

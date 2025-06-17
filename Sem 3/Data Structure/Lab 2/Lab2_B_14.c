#include<stdio.h>
int main(){
	int number,i,j,sum=0;
	printf("Enter number to find Sum = ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			sum+=j;
		}
	}
	printf("Sum of series = %d",sum);
	return 0;
}

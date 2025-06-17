#include<stdio.h>
int main(){
	int number,i=0,j=0;
	printf("Enter Number of Row = ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		for(j=1;j<=number-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}

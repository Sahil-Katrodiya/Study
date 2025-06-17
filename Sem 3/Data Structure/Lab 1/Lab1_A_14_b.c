#include<stdio.h>
int main(){
	int number,i,j;
	printf("Enter Number of Row = ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			if((i+j)%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	
	return 0;
}

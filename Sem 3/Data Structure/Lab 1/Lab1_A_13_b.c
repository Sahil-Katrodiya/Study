#include<stdio.h>
int main(){
	int number,i=0,j=0;
	printf("Enter Number of Row = ");
	scanf("%d",&number);
	for(i=number;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}

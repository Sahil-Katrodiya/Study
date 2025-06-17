#include<stdio.h>
int main(){
	int number,i=0,j=0,m=1;
	printf("Enter Number of Row = ");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			printf("%d ",m);
			m++;
		}
		printf("\n");
	}
	
	return 0;
}

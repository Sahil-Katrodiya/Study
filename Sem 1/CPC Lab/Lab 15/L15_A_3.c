#include<stdio.h>
void main(){

//inserting array    
    int n,count=0;
    printf("enter number of element in array: ");
    scanf("%d",&n);

    int list[n];

    for(int i=1;i<=n;i++){
        int num;
        printf("enter %d number: ",i);
        scanf("%d",&list[i-1]);
    }

//printing original loop
     printf("\n");
    printf("original [ ");
    for(int j=0;j<n;j++){
        printf("%d,",list[j]);

    }
    printf(" ]");
    printf("\n");

//checking if last digit equal to 3
    for(int i=0;i<n;i++){
        if(list[i]%10==3)
            count++;
    }
    printf("element with last digit 3= %d",count);
}
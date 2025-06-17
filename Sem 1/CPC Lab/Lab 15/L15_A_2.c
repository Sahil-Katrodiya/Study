#include<stdio.h>
void main(){
    int nc=0;

//inserting array    
    int n;
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

//counting negative number
    for(int i=0;i<n;i++){
        if(list[i]<0)
            nc++;
    }

printf("total negative number= %d",nc);
}
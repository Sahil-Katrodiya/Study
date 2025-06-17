#include<stdio.h>
void main(){
    int n;
    printf("enter number of element in array: ");
    scanf("%d",&n);

    int list[n];

    for(int i=1;i<=n;i++){
        int num;
        printf("enter %d number: ",i);
        scanf("%d",&list[i-1]);
    }
    
    printf("\n");
    printf("original [ ");
    for(int j=1;j<=n;j++){
        printf("%d,",list[j-1]);

    }
    printf(" ]");
    printf("\n");

    printf("revrerse [ ");

    for(int j=1;j<=n;j++){
        printf("%d,",list[n-j]);

    }
    printf(" ]");
}
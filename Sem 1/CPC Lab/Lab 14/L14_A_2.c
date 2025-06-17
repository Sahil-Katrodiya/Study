#include<stdio.h>
void main(){
    int n;
    int pcount=0,ncount=0;
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
    for(int i=1;i<=n;i++){
        printf("%d,",list[i-1]);

    }
    printf(" ]");
    printf("\n");

    for(int i=1;i<=n;i++){
        if(list[i-1]>0)
          pcount++;
        else
          ncount++;
    }
    printf("\n");
    printf("total positive number: %d\n",pcount);
    printf("total negative number =%d",ncount);

    printf("\n");
}
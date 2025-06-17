#include<stdio.h>
void main(){
    int n;
    int ocount=0,ecount=0;
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
        if(list[i-1]%2==0)
          ecount++;
        else
          ocount++;
    }
    printf("\n");
    printf("total odd number: %d\n",ocount);
    printf("total even number =%d",ecount);

    printf("\n");
}
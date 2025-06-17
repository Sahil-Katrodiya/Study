//array reversing
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

    for(int i=0;i<n/2;i++){
        int temp;
        temp=list[i];
        list[i]=list[n-1-i];
        list[n-1-i]=temp;
    } 

    //reversed array

    printf("\n");
    printf("reversed [ ");
    for(int i=1;i<=n;i++){
        printf("%d,",list[i-1]);

    }
}
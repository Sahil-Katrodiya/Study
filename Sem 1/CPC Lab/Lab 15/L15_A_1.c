#include<stdio.h>
void main(){
    int num[5]={34,54,34,99,76};
    int copy[5];

    for(int i=0;i<5;i++){
        copy[i]=num[i];
    }
printf("[");
    for(int i=0;i<5;i++){
        printf("%d,",copy[i]);
    }
printf("]");
}
#include<stdio.h>

void main() {
    int n,sum=0;
    printf("Enter number = ");
    scanf("%d",&n);
    int i=1;
    while(i<n) {
       if(n%i==0) {
        sum =sum+i;
        i++;
       }
       else {
        i++;
       }
    }
    if(sum == n) {
        printf("perfect number");
    }
    else {
        printf("not perfect number");
    }
}
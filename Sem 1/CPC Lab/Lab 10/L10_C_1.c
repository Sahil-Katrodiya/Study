#include<stdio.h>

void main() {
    int n,rem,sum = 0;
    scanf("%d",&n);
    int d = n;
    while(n!=0) {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    if(d == sum) {
        printf("armstrong number");
    }
    else {
        printf("not armstrong number");
    }
}
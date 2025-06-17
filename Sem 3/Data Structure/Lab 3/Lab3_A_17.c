#include<stdio.h>
int main(){
    int n=0;
    printf("Enter number of element in array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start=0,end=0,sum=0;
    printf("Enter starting index of sum = ");
    scanf("%d",&start);
    printf("Enter ending index of sum = ");
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
        sum+=arr[i];
    }
    printf("Answer of sum = %d",sum);
}
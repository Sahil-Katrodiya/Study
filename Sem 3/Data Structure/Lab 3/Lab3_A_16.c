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
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
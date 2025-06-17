#include<stdio.h>
int main(){
    int n=0;
    printf("Enter element of array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=0,second=0;
    printf("Enter number of element in array = ");
    scanf("%d",&first);
    printf("Enter number to replace it = ");
    scanf("%d",&second);
    for(int i=0;i<n;i++){
        if(arr[i]==first){
            arr[i]=second;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
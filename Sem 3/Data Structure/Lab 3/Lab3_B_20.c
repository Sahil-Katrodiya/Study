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
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    if(count==0){
        printf("Does not contains duplicate element");
    }
    else{
        printf("Contains duplicate element");
    }
}
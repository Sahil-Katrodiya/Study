#include<stdio.h>
void main(){
    int arr[100];
    int position=0,n;
    printf("Enter number of element = ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element at %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter position where you want to delete an element = ");
    scanf("%d",&position);
    for(int i=position;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("a[%d] = %d\n",i,arr[i]);
    }
}
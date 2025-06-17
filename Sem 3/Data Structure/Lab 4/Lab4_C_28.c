#include<stdio.h>
int main(){
    int n=0,position;
    printf("Enter number of element in array = ");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        printf("Enter element = ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                // printf("%d",arr[i]);
                for(int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                // printf("%d",arr[i]);
                for(int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("a[%d] = %d\n",i,arr[i]);
    }
}
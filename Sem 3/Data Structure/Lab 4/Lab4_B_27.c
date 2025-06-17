#include<stdio.h>
#include<math.h>
void main(){
    int arr[100];
    int position=0,data,n;
    printf("Enter number of element = ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element at %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp;
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Enter element you want to delete = ");
    scanf("%d",&data);
    for(int i=0;i<n;i++){
        if(arr[i]==data){
            position=i;
        }
    }
    // printf("Position %d",position);
    for(int i=position;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("a[%d] = %d\n",i,arr[i]);
    }
}
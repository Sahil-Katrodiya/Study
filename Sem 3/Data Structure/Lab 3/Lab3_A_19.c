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
    int max=arr[0],min=arr[0] ,indmax=0,indmin=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(max<arr[j]){
                max=arr[j];
                indmax=j;
            }
            if(min>arr[j]){
                min=arr[j];
                indmin=j;
            }
        }
    }
    printf("Max nuber is %d at %d\n",max,indmax);
    printf("Min nuber is %d at %d",min,indmin);
}
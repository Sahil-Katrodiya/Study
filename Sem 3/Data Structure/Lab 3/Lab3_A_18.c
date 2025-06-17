#include<stdio.h>
int main(){
    int n=0;
    printf("Enter number of element in array = ");
    scanf("%d",&n);
    int arr[n],sum=0;
    printf("Enter element = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg=(float)sum/n;
    printf("Average is = %f",avg);
}
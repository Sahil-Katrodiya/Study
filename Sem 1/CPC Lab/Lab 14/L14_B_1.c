//element greater than average
#include<stdio.h>
void main(){
    int n,count=0;
    float sum=0,avg;
    
//entering number of element in array
    printf("enter numbner of element: ");
    scanf("%d",&n);
    float num[n];

//enter values(loop) and average cal
    for(int i=1;i<=n;i++){
        //int temp;
        printf("enter %d number: ",i);
        scanf("%d",&num[i-1]);
        sum+=num[i-1];
    }
    avg=sum/n;

//linear searching
    for(int i=1;i<=n;i++){
        if(num[i-1]>avg)
          count++;
    }
    printf("number greater than average= %d",count);
}
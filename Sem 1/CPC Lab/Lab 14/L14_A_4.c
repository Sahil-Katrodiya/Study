#include<stdio.h>
void main(){
    int n,max=0,min;
    float sum=0,avg;
    
    printf("enter number of element in array: ");
    scanf("%d",&n);

    int list[n];

    for(int i=1;i<=n;i++){
        int num;
        printf("enter %d number: ",i);
        scanf("%d",&list[i-1]);
    }

    min=list[0];
    
    printf("\n");
    printf("original [ ");
    for(int i=1;i<=n;i++){
        sum+=list[i-1];
        printf("%d,",list[i-1]);
        if(list[i-1]>max)
            max=list[i-1];
        else{
            min=list[i-1];
        }
    }
    printf(" ]");
    printf("\n");
    avg=sum/n;
    printf("minimun number: %d\n",min);
    printf("maximun number: %d\n",max);
    printf("sum of number: %f\n",sum);
    printf("avearge: %f\n",avg);
}
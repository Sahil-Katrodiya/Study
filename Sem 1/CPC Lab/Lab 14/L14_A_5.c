//linear searching based on height and weight condition
#include<stdio.h>
void main(){
    int n,count=0;

//enterinh number pf people

    printf("enter number of people: ");
    scanf("%d",&n);

    float weight[n],height[n];

//entering weight of people

    for(int i=1;i<=n;i++){
        int num;
        printf("enter weight %d person[kg]: ",i);
        scanf("%f",&weight[i-1]);
    }.2
    
    printf("\n");
    printf("weight [ ");
    for(int j=1;j<=n;j++){
        printf("%.2f,",weight[j-1]);

    }
    printf(" ]");
    printf("\n");

//enter height

    for(int i=1;i<=n;i++){
        int num;
        printf("enter height %d person[cm]: ",i);
        scanf("%f",&height[i-1]);
    }
    
    printf("\n");
    printf("height [ ");
    for(int j=1;j<=n;j++){
        printf("%.2f,",height[j-1]);

    }
    printf(" ]");
    printf("\n");

//linear seaching

    for(int i=1;i<=n;i++){
        if(height[i-1>170.0&&weight[i-1]<50.0])
            count+=1;
    }
    printf("\n");
    printf("people with weight<50kg and height>170cm= %d",count);
    printf("\n");
}
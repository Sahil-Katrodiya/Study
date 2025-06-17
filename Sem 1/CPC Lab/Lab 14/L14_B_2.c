#include<stdio.h>
#include<math.h>
void main(){
    int n;
    float m;
    float gm,hm=0,avg,sum=0,pro=1;
    printf("enter number of element:");
    scanf("%d",&n);

    float list[n];
//array insertion
    for(int i=0;i<n;i++){
        printf("enter %d number: ",i+1);
        scanf("%f",&list[i]);
    }
//calculation
    for(int i=0;i<n;i++){
        sum+=list[i];
        pro*=list[i];
        hm+=(1/list[i]);
    }
    
    //explicit conversion mistake
    m=1/((float)n);

    avg=sum/n;
    gm=pow(pro,m);
    hm/=n;
    
    printf("average= %.2f\n",avg);
    printf("geometric mean= %.2f\n",gm);
    printf("harmonic mean= %.2f",hm);

}
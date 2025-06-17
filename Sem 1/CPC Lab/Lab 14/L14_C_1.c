#include<stdio.h>
void main(){
    int d_count=0,dup=0;
//inserting array    
    int n;
    printf("enter number of element in array: ");
    scanf("%d",&n);

    int list[n];

    for(int i=1;i<=n;i++){
        int num;
        printf("enter %d number: ",i);
        scanf("%d",&list[i-1]);
    }
//printing original loop
     printf("\n");
    printf("original [ ");
    for(int j=0;j<n;j++){
        printf("%d,",list[j]);

    }
    printf(" ]");
    printf("\n");

//double counter
    for(int i=0;i<n;i++){
        //dup=list[i];
        d_count=0;
        for(int j=i+1;j<n;j++){
            if(list[i]==list[j]){
                d_count++;
                dup++;
            }
        }
        if(d_count>=2)
            dup-=(d_count-1);
    }

    printf("number of duplicate element: %d",dup);
}
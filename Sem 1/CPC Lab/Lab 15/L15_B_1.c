#include<stdio.h>
void main(){
    //inserting array    
    int n,dup=0,j=0,d_count;
    printf("enter number of element in array: ");
    scanf("%d",&n);

    int list[n],new[n];

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

//deleting duplicate element
    for(int i=0;i<n-1;i++){
        //dup=list[i];
        d_count=0;
        for(int j=i+1;j<n;j++){
            if(list[i]==list[j]){
                d_count++;
                
            }
        }
        if(d_count==0){
            new[j]=list[i];
            j++;
        }
        
    }

    for(int i=0;i<n-1;i++){
        if(list[i]==list[n-1]){
                 dup++;
            }
    }

    if(dup==0){
            new[j]=list[n-1];
            j++;
        }

//printing new array
     printf("\n");
    printf("new [ ");
    for(int a=0;a<j;a++){
        printf("%d,",new[a]);

    }
    printf(" ]");
    printf("\n");


}
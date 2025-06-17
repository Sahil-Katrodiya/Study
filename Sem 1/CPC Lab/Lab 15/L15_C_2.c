#include<stdio.h>
void main(){
    //int list[5]={2,34,62,10,33};
//inserting array    
    int n;
    printf("enter number of element in array: ");
    scanf("%d",&n);

    int list[n+1];
    

    for(int i=1;i<=n;i++){
        int num;
        printf("enter %d number: ",i);
        scanf("%d",&list[i-1]);
    }
    list[n+1]=0;
//printing original loop
     printf("\n");
    printf("original [ ");
    for(int j=0;j<n;j++){
        printf("%d,",list[j]);

    }
    printf(" ]");
    printf("\n");

//sorting loop
    for(int j=0;j<n-1;j++){
      for(int i=0;i<n-1;i++){
        if(list[i]>list[i+1]){
            int temp;
            temp=list[i+1];
            list[i+1]=list[i];
            list[i]=temp;
        }
      }
    }

//printing sorted loop
     printf("\n");
    printf("sorted [ ");
    for(int j=0;j<n;j++){
        printf("%d,",list[j]);

    }
    printf(" ]");
    printf("\n");

//entering new element
    printf("enter new element: ");
    scanf("%d",&list[n+1]);
    printf("%d",list[n+1]);


//sorting the newe array
    for(int j=0;j<n;j++){
     for(int i=0;i<n;i++){
        if(list[i]>list[i+1]){
            int temp;
            temp=list[i+1];
            list[i+1]=list[i];
            list[i]=temp;
        }
     }
    }

//printing newly sorted loop
     printf("\n");
    printf("new sorted [ ");
    for(int j=0;j<n+1;j++){
        printf("%d,",list[j]);

    }
}
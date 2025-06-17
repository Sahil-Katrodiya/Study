#include<stdio.h>
void main(){
    int search,list[5]={432,54,87,43,12},count=0,a;

//number to be searched
    printf("enter the number to be searched: ");
    scanf("%d",&search);

//linear search
    for(int i=0;i<5;i++){
        if(list[i]==search){
            
            count++;
            a=i;
            break;

        }
        
    }    
    if(count==0)
        printf("not found");
    else    
        printf("number found at %d index",a);
}
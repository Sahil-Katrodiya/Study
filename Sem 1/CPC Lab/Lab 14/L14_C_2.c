#include<stdio.h>
void main(){
    int num[7]={1,3,5,6,7,8,9},count=0;

    for(int i=1;i<=10;i++){
        for(int j=0;j<=6;j++){
            if(i==num[j]){
                //printf("%d ",i);
                
                break;
            }
            else{
                printf("%d",i);
                break;            
            }


        }
    }

}
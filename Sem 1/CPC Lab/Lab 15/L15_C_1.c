//max and min in array
#include<stdio.h>
void main(){
    int list[5]={10,72,87,2,76};
    int new[5];
    int max1=list[0],max2=list[0];
//finding 1st largest number
    for(int i=0;i<5;i++){
        if(list[i]>max1){
            max1=list[i];
        }
    }
//creating new array without the largest element
    int j=0;
    for(int i=0;i<5;i++){
        if(list[i]!=max1){
            new[j]=list[i];
            j++;
        }
    }
//finding largest number in new array i.e 2nd largest number
    for(int i=0;i<j;i++){
        if(new[i]>max2){
            max2=new[i];
        }
    }

    printf("1st max number= %d\n",max1);
    printf("2nd max number= %d",max2);
}
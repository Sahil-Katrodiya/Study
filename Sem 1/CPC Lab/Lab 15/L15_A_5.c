#include<stdio.h>
void main(){
    char name[20];
    int len=0;
    printf("enter your name: ");
    scanf("%s",name);

    printf("welcome %s\n",&name[0]);

    for(int i=0;i<20;i++){
        if((name[i]>='A'&& name[i]<='Z')||(name[i]>='a'&& name[i]<='z'))
            len++;
    }
    printf("length of string entered= %d",len);
}
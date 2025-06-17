#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k;
	for(i=1;i<=1000;i++){
		int temp1=i,count=0;
		int armstrong=0;
		while(temp1!=0){
			count++;
			temp1/=10;
		}
		int temp2=i;
		while(temp2!=0){
		
			int reminder=temp2%10;
			// int power=1;
			// for(k=1;k<count;k++){
			// 	power*=reminder;
			// }
			// armstrong+=power;

			armstrong+=pow(reminder, count);
			temp2/=10;
		}
		if(armstrong==i){
			printf("%d\n",armstrong);
		}
	}
	return 0;
}

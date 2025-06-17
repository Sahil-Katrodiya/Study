#include<stdio.h>
int main(){
	char alphabet;
	printf("Enter Alphabet to check whether it is Vowel or not = ");
	scanf("%c",&alphabet);
	if ((alphabet=='A')||(alphabet=='E')||(alphabet=='I')||(alphabet=='O')||(alphabet=='U')||(alphabet=='a')||(alphabet=='e')||(alphabet=='i')||(alphabet=='o')||(alphabet=='u')){
		printf("%c is an Vowel",alphabet);
	}
	else{
		printf("%c is not an Vowel",alphabet);
	}
	return 0;
}

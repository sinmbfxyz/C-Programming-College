#include<stdio.h>
void main(){
	char n;
	printf("Enter a character");
	scanf("%c",&n);
	if(n=='a'|| n=='e'||n=='i'||n=='o'||n=='u'){
		printf("Vowel");
	}
	else{
		printf("consonant");
	}
}

#include<stdio.h>
void main(){
	char c;
	printf("Enter the character");
	scanf("%c",&c);
	if(c>='A'&&c<='Z'||c>='a'&&c<='z'){
	printf("character");
	}
	else if(c>='0'&&c<='9'){
		printf("integer");
	}
	else{
		printf("Special Character");
	}
}

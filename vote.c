#include<stdio.h>
void main(){
	int a;
	printf("Enter a age");
	scanf("%d",&a);
	if(a<18){
		printf("The person is not eligible to vote");
	}
	else{
		printf("The person is eligible to vote");
	}
}

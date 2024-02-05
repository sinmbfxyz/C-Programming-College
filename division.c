#include<stdio.h>
void main(){
	int a;
	printf("Enter a percentage");
	scanf("%d",&a);
	if (a>=80){
		printf("Distinction");
	}
	else if(a>=60&&a<=79){
		printf("1st division");
	}
	else if(a>=45&&a<=59){
		printf("2nd divsion");
	}
	else if(a>=32&&a<=44)
{
	printf("3rd division");
}
else {
	printf("Fail");
}
}

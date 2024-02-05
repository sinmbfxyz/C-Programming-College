#include<stdio.h>
void main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	(a>0)?printf("Positive"):(a==0)?printf("zero"):printf("number is negative");
}

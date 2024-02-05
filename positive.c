#include<stdio.h>
void main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	n>0?printf("%d is positive",n):printf("%d is negative",n);
}

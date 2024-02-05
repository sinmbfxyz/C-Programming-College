#include<stdio.h>
void main(){
	int a,b;
	printf("Enter any two numbers");
	scanf("%d %d",&a,&b);
	(a>b)?
			printf("The difference bteween entered number is %d",a-b)
			:printf("The sum between entered number is %d",a+b);
	}

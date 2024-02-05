#include<stdio.h>
void main(){
	char a;
	int b,c;
	printf("If you want to add two numbers press Y else press N\n");
	scanf("%c",&a);
	while(c='Y'){
		printf("Enter 2 number\n");
		scanf("%d %d",&b,&c);
		printf("%d",a+b);
		
	}
	
}

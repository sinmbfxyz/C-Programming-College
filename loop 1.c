#include<stdio.h>
void main(){
	int a,b;
	char o;
	printf("\nEnter an operator (+,-,*,/,%)");	
	scanf("%c",&o);
	printf("Enter any 2 numbers");
	scanf("%d %d",&a,&b);
	switch(o){
		case '+':
			printf("sum=%d",a+b);
			break;
		case '-':
			printf("difference=%d",a-b);
			break;
		case '*':
			printf("product=%d",a*b);
			break;
		case '/' :
			printf("division=%d",a/b);
			break;
		case '%' :
			printf("Remainder=%d",a%b);
			break;
	}
}

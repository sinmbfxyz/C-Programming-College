#include<stdio.h>
void main(){
	int a,b,c,x,y;
	printf("Enter any three numbers");
	scanf("%d %d %d",&a,&b,&c);
	y=(a>b)?b:a;
	(y>c)?printf("%d is smallest",c ):printf("%d is smallest",y);
	
}

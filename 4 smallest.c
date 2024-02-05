#include<stdio.h>
void main(){
	int a,b,c,d,x,y;
	printf("Enter any four numbers");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	x=(a>b)?b:a;
	y=(c>d)?d:c;
	(x>y)?printf("%d is smallest",y):printf("%d is smallest",x);
}

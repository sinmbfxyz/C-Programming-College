#include<stdio.h>
void main(){
	int n,a,b,c=0,p;
	printf("Enter a 4 digit number");
	scanf("%d",&n);
	a=n%10;
	b=a*a;
	c=c+b;
	n=n/10;
	a=n%10;
	b=a*a;
	c=c+b;
	n=n/10;
	a=n%10;
	b=a*a;
	c=c+b;
	n=n/10;
	a=n%10;
	b=a*a;
	c=c+b;
	
	printf("%d is sum of square of each digit",c);
	
	
}

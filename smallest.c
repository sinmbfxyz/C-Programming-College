#include<stdio.h>
void main(){
	int a,b,c,d,x,y;
	printf("Enter any 4 numbers");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	x=a<b?
			a<c
			?printf("%d is small",a)
			:printf("%d is small",c)
		:b>c
			?printf("%d is small",b)
			:printf("%d is small",c);
	y=x<d?("%d is smallest",x):("%d is smallest",d);
}

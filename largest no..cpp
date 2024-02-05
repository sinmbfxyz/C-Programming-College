#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three number:");
	scanf("%d%d%d",&a,&b,&c);
	a>b
	    ?a>c
	       ?printf("%d is the largest number",a)
	       :printf("%d is the largest number",c)
	    :b>c
	        ?printf("%d is the largest number",b)
	        :printf("%d is the largest number",c);
}

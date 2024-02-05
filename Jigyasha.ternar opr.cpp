#include<stdio.h>
int main()
{
	int a=10,b=50,c=3;
	a>b
	   ?a>c
	       
			 ?printf("%d is greater",a)
	       :printf("%d is greater",c)
	   :b>c
	       ?printf("%d is greater",b)
	       :printf("%d is greater",c);
}

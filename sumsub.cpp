#include<stdio.h>
int main()
{
	int a,b,n;
	printf("Enter any two number");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		printf("a is greater so subtraction %d",a-b);
		
	}
	else
	{
		printf("a is greater so sum%d",a+b);
	}
}

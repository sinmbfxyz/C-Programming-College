#include<stdio.h>
int main()
{
	int n1;
	printf("enter a number:");
	scanf("%d",&n1);
	if (n1>0)
	{
		printf("%d is positive number",n1);
	}
	else if(n1<0)
	{
		printf("%d is negative number",n1);
	}
	else 
	{
		printf("%d is zero",n1);
	}
}

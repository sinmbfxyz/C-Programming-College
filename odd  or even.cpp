#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	n%2==0?printf("%d is even",n):printf("%d is odd",n);
}

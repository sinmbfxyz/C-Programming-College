#include<stdio.h>
int main()
{
	int rem,rev=0,n;
	printf("enter a number:");
	scanf("%d",&n);
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	printf("the reverse is %d",rev);
}

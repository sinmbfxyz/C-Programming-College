#include<stdio.h>
int main()
{
	int n,rem,sum;
	printf("enter a four digit number:");
	scanf("%d",&n);
	rem=n%10;
	sum=sum+rem*rem;
	n=n/10;
	rem=n%10;
	sum=sum+rem*rem;
	n=n/10;
	rem=n%10;
	sum=sum+rem*rem;
	n=n/10;
	rem=n%10;
	sum=sum+rem*rem;
	n=n/10;
	printf("The sum of square of each digit is %d",sum);
}

#include<stdio.h>
void main(){
	int n,rem=0,rev=0;
	printf("Enter a number");
	scanf("%d",&n);
	rem=n%10;
	rev=rev+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
printf("%d",rev);
	
	
}

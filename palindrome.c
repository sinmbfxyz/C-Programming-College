#include<stdio.h>
void main(){
	int rem,i,n,x,rev=0;
	printf("Enter a number");
	scanf("%d",&n);
	x=n;
	while(n!=0){
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
printf("%d",rev);
if(rev==x){
	printf("\npalindrome");
}
else{
	printf("\nNot a palindrome");
}
}

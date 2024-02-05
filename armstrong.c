#include<stdio.h>
void main(){
	int n,rem,arm=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n<0){
		rem=n%10;
		arm=arm+rem*rem*rem;
		n=n/10;
	}
	printf("%d",arm);
}

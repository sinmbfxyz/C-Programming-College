#include<stdio.h>
void main(){
	int s,t,as;
	printf("Enter your salary amount");
	scanf("%d",&s);
	if(s<=400000){
		t=0.01*s;
		as=s-t;
		printf("%d is tax and %d is salary",t,as);
	}
	else if(s>=400000 && s<=500000){
		t=0.01*400000+0.1*(s-400000);
		as=s-t;
		printf("%d is tax and %d is salary",t,as);
	}
	else{
		t=0.01*400000+0.1*100000+(s-500000)*0.2;
		as=s-t;
		printf("%d is tax and %d is salary",t,as);
	}
}

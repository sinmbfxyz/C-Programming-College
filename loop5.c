#include<stdio.h>
void main(){
	int o=1,sum=0;
	while(o<=100){
		sum=sum+o;
		o=o+2;	
	}
	printf("%d",sum);
}

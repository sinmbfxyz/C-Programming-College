#include<stdio.h>
void main(){
	int y;
	printf("Enter a year");
	scanf("%d",&y);
	if(y%4==0){
		if(y%100!=0){
				printf("%d is leap year",y);
			}
			else{
				if(y%400==0){
					printf("%d is leap year",y);
				}
				else{
					printf("%d is not a leap year",y);
				}
			}
	}
	else{
		printf("%d not a leap year",y);
	}
}

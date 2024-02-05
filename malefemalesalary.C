#include<stdio.h>
void main(){
	float s;
	char g;
	printf("Enter M for Male and F for Female");
	scanf("%c",&g);
	if(g=='M'){
		printf("Enter a salary");
		scanf("%f",&s);
		if(s<=10000){
			s=0.05*s+s;
			s=0.02*s+s;
			printf("%f",s);
		}
	
	}
}

#include<stdio.h>
void main(){
	float s,b1,b2;
	char g;
	printf("Enter M for Male and F for Female");
	scanf("%c",&g);
	if(g=='M'){
		printf("Enter a salary");
		scanf("%f",&s);
		if(s<=10000){
			b1=0.05*s;
			b2=0.02*s;
			s=s+b1+b2;
			printf("5 percent bonus is %f\n",b1);
			printf("Extra 2 percent bonus is %f\n",b2);
			printf("%f is salary after bonus",s);
		}
		else{
			b1=0.05*s;
			s=s+b1;
			printf("5 percent bonus is %f\n",b1);
			printf("%f is salary after bonus\n",s);
		}
	
	}
	else{
		printf("Enter a salary");
		scanf("%f",&s);
		if(s<=10000){
			b1=0.1*s;
			b2=0.02*s;
			s=s+b1+b2;
			printf("10 percent bonus is %f\n",b1);
			printf("Extra 2 percent bonus is %f\n",b2);
				printf("%f is salary after bonus",s);
		
	}
	else{
		b1=0.1*s;
		s=s+b1+b2;
		printf("10 percent bonus is %f\n",b1);
		
		printf("%f is salary after bonus",s);
	}
	
 }
}

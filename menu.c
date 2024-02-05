#include<stdio.h>
#include<process.h>
void main(){
	int m,t;
	printf("*********Menu***********");
	printf("\NEnter the number to order\nNo.1 Momo\nNo.2 Paratha\nNo.3 Burger\nNo.4 Pizza\nNo.5 Chowmein");
	printf("\n************************");
	scanf("%d",&m);
	switch(m){
		case 1:
			printf("Enter the number\nno.1 Veg\nno.2 Chicken\nno.3 Buff");
			scanf("%d",&t);
			switch (t){
				case 1:
				printf("Rs. 90");
				break;
				case 2:
					printf("Rs. 150");
					break;
					case 3:
						printf("Rs.180");
						case 4:
							exit(0);
					default:
						printf("invalid");
				
			}
	}
	
}

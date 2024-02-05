#include<stdio.h>
void main(){
	int id,pass;
	printf("Enter your id\n");
	scanf("%d",&id);
	switch(id){
		case 12345:
		printf("Enter your password");
		scanf("%d",&pass);
		switch(pass){
			case 12:
			printf("\nLogin Successful");
			break;
			default:
				printf("\nWrong Password");
			
		}
		break;
		default:
		printf("\nWrong id");
	}
	
}

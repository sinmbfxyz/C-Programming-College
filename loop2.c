#include<stdio.h>
void main(){
	char r;
	printf("Enter\n S for Save \n O for Open \n E for Exit");
	scanf("%c",&r);
	switch(r){
		case 'S':
			printf("You want to save the file?");
			break;
			case 'O':
			printf("You want to open the file?");
			break;
			case 'E':
			printf("You want to exit the file?");
			break;
	}
	
}

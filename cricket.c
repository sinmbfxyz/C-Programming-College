#include<stdio.h>
void main(){
	int r,w=0,n,total=0,b,ball=0;
	printf("Enter the ball");
	scanf("%d",&b);
	while(b<=120){
		printf("Next");
		printf("\nrun\nout");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("Enter the run");
				scanf("%d",&r);
				total=total+r;
				ball=1+ball;
				printf("%d %d",total,w);
				printf("\n%d\n",ball);
				break;
				case 2:
					printf("Enter the wicket");
					scanf("%d",&w);
					ball=ball+1;
					w=1+w;
					printf("%d %d \n%d",total,w,ball);
		}
	}
}

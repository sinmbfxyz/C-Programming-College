#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,c;
	printf("\n*************MENU****************");
	printf("\n1.Momo\n2.Burger\n3.Nodles\n4.Exit");
	printf("\nEnter your choice (1-4)");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("\n1.CHICKEN\n2.BUFF\n3.VEG\n4.PORK\n5.EXIT");
			printf("\n enter your choice");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("\nRS.200");
					break;
					case 2:
						printf("\nRs.150");
						break;
						case 3:
							printf("\nRs.140");
							break;
							case 4:
								printf("\nRs.250");
								break;
								case 5:
									exit(0);
									default:
										printf("Invalid");
			}
			case 2:
				printf("Burger");
				break;
				case 3:
					printf("Noodles");
					break;
					case 4:
						exit(0);
						default:
							printf("Invalid");
	}
	
	
}

#include<stdio.h>
int main()
{
	int n;
	printf("enter a year");
	scanf("%d",&n);
	if (n%4==0)
	{
		if (n%100==0)
		{
			if (n%400==0)
			{
				printf("it is a leap year");
			}
			else
			{
				printf("it is not a  leap year");
			}
		
		}else
		{
			printf("it is a leap year");
		}	
	
	}else
	{
		printf("it is not a  leap year");
	}	
		}
	



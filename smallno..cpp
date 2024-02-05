#include<stdio.h>
int main()
{
	int a,b,n1,n2,n3,n4;
	printf("enter any four numbers");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	a=n1<n2
	    ?n1
	    :n2;
   b=n3<n4
       ?n3
       :n4;
   a<b
       ?printf("%d is smaller number",a)
       :printf("%d is smaller number",b);
}

#include<stdio.h>
int main()
{
int a,b,c,x,y,z;
	printf("Enter first Number:");
	scanf("%d",&a);
	printf("Enter second Number:");
	scanf("%d",&b);
	printf("Enter third Number:");
	scanf("%d",&c);
	x=b,y=c,z=a;
	printf("\nFirst Number becomes:%d",x);
	printf("\nSecond Number becomes:%d",y);
	printf("\nThird Number becomes:%d",z);
	return 0;
}

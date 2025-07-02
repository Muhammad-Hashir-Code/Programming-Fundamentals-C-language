#include<stdio.h>
int main()
{
	int num1,s;
	printf("Enter any positive integer:");
	scanf("%d",&num1);
	printf("The conjecture series is:\n");
	s=num1;
	do{
	
	if(s%2==0)
	{
		s=s/2;
		
	}
	else
	{
		s=(s*3)+1;
		
	}
	printf("%d\n",s);
}
while(s!=1);
return 0;
}


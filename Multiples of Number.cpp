#include<stdio.h>1
int main()
{
	int num,num1;
	int LCM;
	printf("Enter the number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
		printf("\nThe multiple is : %d",i);
		}
		
	}

	return 0;
}

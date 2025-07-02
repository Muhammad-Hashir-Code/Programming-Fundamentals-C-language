#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter any natural number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			sum=i+sum;
		}

	}
	printf("The sum of even numbers is:%d",sum);
return 0;	
}

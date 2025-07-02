//Calculating HCF and LCM using Euclidean Algorithm
#include<stdio.h>
int main()
{
	int num,num1,HCF;
	printf("Enter num:");
	scanf("%d",&num);
	printf("Enter num:");
	scanf("%d",&num1);
	int num2=num,num3=num1;
	int remainder;
	int remainder1;
	while(num1!=0)
	{
	    remainder=num%num1;
		num=num1;
		num1=remainder;
		HCF=num;
	
	}
	printf("HCF of given numbers is: %d",HCF);
	int LCM=(num2*num3)/HCF;
	printf("\nLCM of given numbers is: %d",LCM);

}

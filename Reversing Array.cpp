#include<stdio.h>
int main()
{
	int sum=0,size;
	printf("Enter size of an Array:");
	scanf("%d",&size);
	int arr[size],arr1[size];
	for(int i=0;i<size;i++)
	{
		printf("Enter value:");
		scanf("%d",&arr[i]);
	}
	printf("The given array is:");
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		if(i<(size-1))
		{
		printf(",");
	    }
	}
	printf("\nThe reverse of given array is:");
	for(int i=(size-1);i>=0;i--)
	{
		printf("%d",arr[i]);
		if(i>=(1))
		{
		printf(",");
	    }	
	}
	return 0;
	

}

#include<stdio.h>
int main()
{
	int size=0;
	printf("Enter size of an Array:");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("Enter value:");
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
   for(int i=0;i<max;i++)
   {
   	printf("\n");
   }
   for(int i=0;i<size;i++)
   {
   	printf("*");
   }
    return 0;
}

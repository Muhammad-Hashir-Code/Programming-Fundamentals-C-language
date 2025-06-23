#include<stdio.h>
int main()
{
    int size;
	printf("Enter size of an Array:");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("Enter value:");
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int max=arr[0];
	int min1=arr[0];
	int secondsmallest=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	for(int i=0;i<size;i++)
	{
	    if(arr[i]>min && arr[i]<max)
		{
			if (secondsmallest == 0 || arr[i] < secondsmallest) {
                secondsmallest = arr[i]; 
            }
		}

 }
	if (secondsmallest != 0) 
	{
        printf("The second smallest number is: %d\n", secondsmallest);
    }
    else
    printf("The given array is either same or have only three elements");
		return 0;
}

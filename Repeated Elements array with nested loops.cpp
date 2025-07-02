#include<stdio.h>
int main()
{
	int arr[]={1,2,2,3};
	int count=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[j]==arr[i+1])
			{
				count++;
				printf("%d",arr[i]);
				
			}
		}
	}
	printf("%d",count/3);


}

#include<stdio.h>
int Binsearch(flaot arr[],float target,int LB,int UB)
{
	int mid=(LB+UB)/2;
	if(arr[mid]==target)
	{
		return mid;
	}
	else if(target<arr[mid])
	{
		return Binsearch(arr,target,LB,mid-1);
	}
	else
	{
	
	    return Binsearch(arr,target,mid+1,UB);
	}

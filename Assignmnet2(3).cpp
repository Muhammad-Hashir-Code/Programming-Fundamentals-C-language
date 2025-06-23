//This program is made by first converting array to corresponding ASCII and then Checking it
#include<stdio.h>
int main()
{
	char chArray[]={'c','o','o','o','o','o','l'};
	int size=sizeof(chArray)/sizeof(chArray[0]);
	int intArray[size];
	int count=0;
	int repeat;
	int repeatcount=0;
	for(int i=0;i<size;i++)
	{
		intArray[i]=int(chArray[i]);
	}
	for(int i=0;i<size;i++)
	{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(!(intArray[i]==repeat))
			{
			if(intArray[i]==intArray[j])
			{
				count++;
				repeat=intArray[i];
				printf("\nRepeated Letter is: %c",(char)intArray[i]);
			}

		    }
	
		}
	}
	}
//Check for Indices of Repeated Letter
for(int i=0;i<size;i++)
{
	if((int)chArray[i]==(int)repeat)
	{
		printf("\nIndices of Repeated letters are :%d",i);
	}
}
//Printing the Final Array
printf("\n\nThe Final Required ARRAY is: ");
for(int i=0;i<size;i++)
{
	if(chArray[i]!=repeat)
	{
		printf("%c",chArray[i]);
	}
	else if(repeatcount==0)
	{
		printf("%c",repeat);
		repeatcount++;
	}
}
return 0;
}

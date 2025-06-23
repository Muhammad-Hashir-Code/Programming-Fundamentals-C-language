#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number of Matchsticks: ");
	scanf("%d",&number);
	int matchsticks=number%5;
	if(!(matchsticks==0))
	{
	printf("\nA should pick %d matchsticks at start to win",matchsticks);
    }
    else if(matchsticks==0)
    { 
    printf("\nA will lose the match no matter how much matchsticks it pick at the start");
    return -1;
	}
	return 0;
}

#include <stdio.h>

int main() {
    int n, reversed = 0, remaining=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) 
	{
        remaining= n % 10;
        reversed = reversed * 10 + remaining; 
        n /= 10;                       
    }
    printf("\nReversed number is = %d", reversed);

    return 0;
}


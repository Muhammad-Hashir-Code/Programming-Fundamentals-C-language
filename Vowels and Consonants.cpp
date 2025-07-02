/*Write a C program to input a character from the user and check whether the given character
is a vowel or a consonant, using if-else*/
#include<stdio.h>
//importing library for the comparaison of strings
#include<string.h>
int main()
{
	char alphabet[8];
	printf("Enter any alphabet : ");
	scanf("%c",&alphabet);
	printf("%c",alphabet);
    if (strcmp(alphabet,"a")==0 || strcmp(alphabet,"e")==0 || strcmp(alphabet,"i")==0 || strcmp(alphabet,"o")==0 || strcmp(alphabet,"u")==0)
	{
		printf("It's a vowel");
	}
	else
	printf("It's a consonant");
	return 0;
}



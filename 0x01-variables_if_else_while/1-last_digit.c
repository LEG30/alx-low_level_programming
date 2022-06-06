#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success) 
 */
int main(void) 
{
	int n,lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit > 5) 
	{
	 printf("%d is greater than 5\n", lastDigit);
	} 
	else if (lastDigit < 6 && lastDigit != 0) 
	{
	 printf("%d is less than 6 and not 0\n", lastDigit);
	} 
	else (lastDigit == 0) 
	{ 
	 printf("%d is 0\n", lastDigit);
	} 
        return (0);
} 


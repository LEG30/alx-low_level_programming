#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main → Assigns a random number to the variable n each time it is executed and prints out to stdout based on set conditions.
 *
 * Return: Always 0 (success) 
 */
int main(void) 
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) 
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}


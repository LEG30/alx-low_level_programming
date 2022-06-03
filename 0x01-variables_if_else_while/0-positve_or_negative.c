#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: main - Assigns a random number to the variable n each time it is executed.
 * Return: 0 if success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0) 
{
printf("%i is zero\n", n);
}
else if (n<0) 
{
printf("%i is negative\n", n);
}
else
{
printf("%i is positve\n", n);
}
return (0)
	}	
		

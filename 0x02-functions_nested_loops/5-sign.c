#include "main.h"

/**
 * main → Prints the sign of a number on the given conditions.
 *
 * Return: Always 0 (success)
 */
int print_sign(int n);
{
	int stdout;
	if (n > 0)
	{
	_putchar("+");
	stdout = 1;
	}
	if (n == 0) 
	{
	_putchar("0");
	stdout = 0;
	}
	if (n < 0)
	{
	_putchar('-');
	stdout = -1;
	} 
	return (0);
}


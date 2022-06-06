#include <stdio.h>
/**
 * main → Prints alphabet in lowercase then uppercase, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	in(ch);
	for (ch = 97; ch <= 122; ch++)
	{
		putchar (ch);
	}
	for (ch = 65; ch <= 90; ch++)
        {
		putchar (ch);
	} 
	        putchar (10); /* this is an ascii code for the new line */

		return (0);
}


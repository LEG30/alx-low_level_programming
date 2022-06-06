
#include <stdio.h>

/**
 * main → Prints alphabets in lowercase then upercase followed by a new line.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int ch;
	for(ch = 97; ch <= 122; ch++) 
	{
	    putchar(ch);
        }
          putchar("10"); /* this is an ascii code for the new line */

	  return (0);
}




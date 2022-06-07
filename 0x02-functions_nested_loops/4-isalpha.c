#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main → Checks for alphabetic character.
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c);
          char c;{

	  printf("Enter a character: ");
	  scanf ("%c", &c);

	  if(isalpha(c) == 1)
	  {
	    printf("%c is a letter, lowercase, uppercase. ", c);
	  }
          else
           {
	    printf("%c is not a letter, lowercase, uppercase. ", c);
	   }
       return (0);
}


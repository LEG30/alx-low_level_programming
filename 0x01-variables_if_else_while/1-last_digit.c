#include <stdio.h>
int main()
{
	int n;lastDigit;
	printf("Enter the number n: ");
	scanf("%d", &n);

	if (n > 5) 
		printf("and is greater than 5\n");
	else if ((n == 0) 
		printf("and is 0\n");
       else
                printf("and is less than 6 and not 0\n");

	// find last digit of a number
	lastDigit = n % 10;
	}


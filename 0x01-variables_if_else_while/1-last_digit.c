//C program to print the last digit of the number stored in variable n
#include <stdio.h>
int main(void) {
	int num, digit;

	// Asking for input
	printf("Enter the digit: ");
	scanf("%d", &num);

	digit = num % 10;
	if (digit > 5)
	{
         printf("digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit < 6 && digit != 0) 
	{
	printf("digit of %d is %d and is less than 6 and not 0\n", n, digit);
        } 
        else (digit == 0) 
	{
	 printf("digit of %d is %d and is 0\n", n, digit);
        } 
        // Displaying output
	printf("digit of %d is: %d", num, digit);
        
	return (0);
}


#include <stdio.h>

int main(void)
{
   int n;
   printf("\n Enter any number that produces outcome string last digit of: ");
   scanf("%d",&n);

   LastDigit = n % 10;

   if (n %10 > 5) 
	   printf("greater than 5\n");
   else if (n % 10 == 0) 
	   printf("0\n");
   else
	   printf("less than 6 and not 0\n");

   return (0);
}


 
   
      

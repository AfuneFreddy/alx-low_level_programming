#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*more header goes here*/

/*betty style doc for function goes here*/
/**
 * Main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code goes here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}


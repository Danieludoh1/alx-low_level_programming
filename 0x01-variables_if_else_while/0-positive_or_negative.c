#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main: main block
 *
 * Short description: Generate a random number and print whether it is positive, negative, or zero.
 *
 * Description: Get A Ramdom Number and print if it's
 * Negative or positive.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{

		printf("%d is zero\n", n);
	}
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 *
 * Description: Prints The first 32 Even Numbers Fibonacci,
 * Followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	long i;

	long a = 2;

	long b = 4;

	long c;

	printf("%ld, %ld, ", a, b);

	for (i = 2; i <= 29; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(i == 29 ? "%ld\n" : "%ld, ", c);
	}
	return (0);
}



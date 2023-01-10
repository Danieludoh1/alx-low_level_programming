#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints The First 50 Fibonacci Numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0;
 */

int main (void)
{
	long i;

	long a = 1;
	
	long b = 2;

	long c;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(i == 50 ? "%ld\n" : "%ld, ", c);
	}
	return (0);
}


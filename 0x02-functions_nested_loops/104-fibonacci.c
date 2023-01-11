#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints The first 98 fibonacci Numbers,
 * Starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	unsigned int a = 1;

	unsigned int b = 2;

	unsigned int i, c;

	printf("%u, %u, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(i == 98 ? "%u\n" : "%u, ", c);
	}
	return (0);
}


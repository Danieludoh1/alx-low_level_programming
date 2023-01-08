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
	int i, c;

	int a = 1;
	
	int b = 2;

	printf("%d, %d, ", a, b);

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	return (0);
}


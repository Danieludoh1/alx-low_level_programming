#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * Followed by a new line.
 * @n: The char to be checked.
 * Return: Void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n = n + 1;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n = n - 1;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}

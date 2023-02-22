#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size : The size of the square.
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

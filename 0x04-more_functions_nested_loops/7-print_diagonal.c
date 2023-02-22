#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Determines the placement of the diaginal line.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for(j = 1; j <= i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}

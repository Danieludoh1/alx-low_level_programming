#include <stdio.h>
#include "main.h"

/**
 * print_line - Draws A straight Line In the Terminal.
 * @n: Determines The length Of the line.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar('_');
	
	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	}
	putchar('\n');
}

#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints A Triangle, followed by a new line.
 * @size : The size of the Triangle.
 * Return : Void.
 */

void print_triangle(int size)
{
	int i, k;
	int j = 1;

	if (size <= 0)
	{
		putchar('\n');
	}

	/*for (k = size; k >= 0; k--)
	{
		putchar(' ');
	}*/

	for (i = 1; i <= size; i++)
	{
		for (k = size; k > j; k--)
		{
			putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			/*for (k = size; k >= 0; k--)
			{
				putchar(' ');
			}*/
			putchar('#');
		}
		putchar('\n');
	}
}

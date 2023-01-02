#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the 9 times table
 * Starting with 0.
 * Return: void.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			int product = i * j;
			printf("%d, ", product);
		}
		printf("\n");
	}
	
}

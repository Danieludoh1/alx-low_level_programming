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
		for (j = 0; j <= 9; j++)
		{

			int product = i * j;

			/*printf("%d,", product);*/
			if (j == 9)
			{
				printf("%2d", product);
			}
			else
			{
				printf("%2d, ", product);
			}
		}
		printf("\n");
	}
}
	

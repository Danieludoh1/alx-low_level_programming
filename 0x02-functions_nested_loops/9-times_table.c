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
			/*if (product == 0)
			{
				printf("%d,  ", product);
			}*/
			/*if (product > 0 && product < 10)
			{
				printf("%2d, ", product);
			}*/
			if (j == 0)
			{
				printf("%d, ", product);
			}
			/*if (((product >= 1 || product < 10) && j <= 8) || (j != 0))*/
			if ((j != 0) && j < 9)
			{
				printf("%2d, ", product);
			}
			if (j == 9)
			{ 
				printf("%2d", product);
			}
		}
		printf("\n");
	}
}
	

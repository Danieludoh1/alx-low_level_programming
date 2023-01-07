#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to be checked.
 * Return: 0.
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
	
		return;
	}

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = i * j;
				if (j == 0)
				{
					printf("%d, ",product);
				}
				if ((j != 0) && j < n)
				{
					printf("%2d, ", product);
				}
				if (j == n)
				{
					printf("%2d", product);
				}


			}
			/*printf("%d", product);*/
			printf("\n");
		}
		/*printf("%d", product);*/
	/*printf("%d", product);*/
		/*printf("\n");*/
}

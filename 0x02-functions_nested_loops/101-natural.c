#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints The sum of all multiples of 3 & 5
 * Below 1024(exlcuded) followed by a new line.
 * Return: Always 0.
 */

int main(void)
{

	int total = 0;

	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;

			/*printf("%d", total);*/
		}
		printf("%d\n", total);
	}
	return (0);
}

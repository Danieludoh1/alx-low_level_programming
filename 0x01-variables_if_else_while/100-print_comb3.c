#include <stdio.h>
/**
* main - main block
*
* Description: Print all possible different combinations
* of two digits.
*
* Return: 0
*/

int main(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i <= 7 && j <= 9)
			
			putchar(',');
			putchar(' ');
			
		}
	}
		
	putchar('\n');
	return (0);
}

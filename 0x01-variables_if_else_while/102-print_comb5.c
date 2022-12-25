#include <stdio.h>
/*
 * main - main block
 *
 * Description: Prints All Possible combinations of Two 
 * Two-digit numbers.
 *
 * Return: 0
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++) 
	{
		for (j = 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(',');
			putchar(' ');
    }
  }
	putchar('\n');
	return (0);
}
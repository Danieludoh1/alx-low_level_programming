#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print The LowerCase alphabet
 * In Reverse, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

		return (0);
}

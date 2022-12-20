#include <stdio.h>

/**
* main - main block
*
* Description: Print all single digits of base 10
* Starting from 0, Followed by a new line.
*
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
* main - main block

* Description: Print all The Possible Combination Of
* Single-Digit Numbers
* Followed by a new line.
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('9');
	return (0);
}


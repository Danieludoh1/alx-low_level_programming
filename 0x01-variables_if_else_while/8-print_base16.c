#include <stdio.h>
/**
* main - main block
*
* Description: Print all the numbers of base 16
* In Lowercase, Followed by a new line.
* Return: 0
*/

int main(void)
{
	int i;

	char hex[] = "0123456789abcdef";

	for (i = 0; i <= 15; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}


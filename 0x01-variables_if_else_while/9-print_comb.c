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

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
	}
		else
		{

	putchar(' ');
		}
	}
	return (0);
}


#include <stdio.h>

/**
* main - main block
*
* Description: Print the alphabets in lowercase with The
* Exception Of "q & e" Followed by a new line.
*
* Return: 0
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}

	putchar('\n');

	return (0);
}

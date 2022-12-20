#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print the alphabets in lowercase and Uppercase
 * Followed by a new line.
 * Return: 0
 */

int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

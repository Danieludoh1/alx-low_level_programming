#include <stdio.h>

/**
 * main - main block
 * Description: Print the alphabets in lowercase
 * Followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * main - main block
 *
 * Description: Prints The Alphabets In Lower Case Followed
 * By A New Line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

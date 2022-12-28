#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints The Alphabets In Lower Case Followed
 * By A New Line
 *
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

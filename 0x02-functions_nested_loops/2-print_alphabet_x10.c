#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Print All Alphabets In Lower Case 10x
 * followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	int count = 1;
	while (count < 11)
	{ 
		printf("abcdefghijklmnopqrstuvwxyz");
		count = count + 1;
		putchar('\n');
	}
}


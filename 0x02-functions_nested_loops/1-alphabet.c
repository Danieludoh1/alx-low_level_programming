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
/*Description: Prints The Alphabets In Lower Case FollowedBy A New Line*/

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

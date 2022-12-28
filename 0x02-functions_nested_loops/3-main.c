#include <stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	/*printf("%d", r);*/
	r = _islower(108);
	putchar(r+ '0');
	/*printf("%d\n", r);*/
	putchar('\n');
	return (0);
}


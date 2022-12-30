#include <stdio.h>
#include "main.h"
/**
 * main - Check the code.
 *
 * Return: last_digit
 */

int main(void)
{
	int r;
	r = print_last_digit(98);
	_putchar(r + '0');
	r = print_last_digit(0);
	_putchar(r +'0');
	r = print_last_digit(-1024);
	printf("%d\n", r);
	_putchar('\n');
	return (0);
}

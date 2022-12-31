#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Print last digit of a number.
 * @n: Is the number to be checked.
 * Return: The Last digit of @
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		n = -n;
	}

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

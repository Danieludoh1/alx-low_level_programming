#include <stdio.h>
#include "main.h"

/**
 * add - Adds Two Integers and return the result
 * @a: The Character to be checked and then added to b 
 * @b: The character to be checked and then added to a
 * Return: The Result.
 */

int add(int a, int b)
{
	int result = a + b;

	_putchar(result + '0');

	return (result);
}

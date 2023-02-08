#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks For Numbers.
 * @c: The Number to be checked.
 * Return: Return 1 if c is a digit and 0 if otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks If The given parameter is an Uppercase Letter
 * @c: The Parameter to be checked.
 * Return: Returns 1 if it is and 0 if it isn't.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

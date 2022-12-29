#include <stdio.h>
#include "main.h"
/**
 * _islower - Check For Lower cases
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	{
		return (0);
	}
}

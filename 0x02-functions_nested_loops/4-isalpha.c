#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Check for Alphabets
 * @c: Is the char to be checked
 * Return: 1 if char is alphabet, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	{
		return (0);
	}
}

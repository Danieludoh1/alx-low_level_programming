#include <stdio.h>
#include "main.h"
/**
 * _islower - Check For Lower cases
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	} else
	{
		return 0;
	}
}

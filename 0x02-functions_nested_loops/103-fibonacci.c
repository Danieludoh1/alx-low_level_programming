#include <stdio.h>
#include "main.h"

/**
 *
 * Description: Prints The first 32 Even Numbers Fibonacci,
 * Followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	/*long long i;*/

	long long a = 2;

	long long b = 4;

	long long c, sum;


c = 0;
	while ((c < 4000000) && c % 2 == 0)
	{
		c = a + b;
		a = b;
		b = c;
		sum += c;

		c = c + 1;

		/*if ( c % 2 == 0)
		{
			sum += c;
		}*/
	}
	printf("%lld", sum);
	return (0);
}



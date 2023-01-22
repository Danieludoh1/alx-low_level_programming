#include <stdio.h>
#include <math.h>

/**
 * main - main block
 *
 * Description: Prints The first 98 fibonacci Numbers,
 * Starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int a = 1;

	long int b = 2;

	unsigned long int i, c, al, bl, cl, ar, d, br, cr;

	printf("%lu, %ld, ", a, b);

	for (i = 3; i <= 92; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}


	d = 1000000000000000;
	al = a / d;
	ar = a % d;
	bl = b / d;
	br = b % d;
	cl = al + bl;
	cr = ar + br;

	for (i = 0; i < 3; i++)
	{
		cl = al + bl;
		cr = ar + br;
		al = bl;
		ar = br;
		bl = cl;
		br = cr;
		printf("%lu%lu, ", cl, cr);
	}


	for (i = 0; i < 3; i++)

	{
		cl = al + bl;
		cr = ar + br;
		al = bl;
		ar = br;
		bl = cl;
		br = cr;
		printf(i == 2 ? "%lu%lu\n" : "%lu%lu, ", (cl / 10), cr);

	}

	return (0);
}


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

	long double b = 2;

	unsigned long int i, c, al, ar, bl, br, cl, cr, d; /*A, B, C, num, numm, nummc;*/

		      printf("%lu, %lu, ", a, b);

	for (i = 3; i <= 92; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}

	a = 7540113804746346429;
	b = 1.22002 * 10^17;
	d = 100000000;
	al = a / d;
	ar = a % d;
	bl = b / d;
	br = b % d;
	cl = al + bl;
	cr = ar + br;
	printf("%lu %lu", cl, cr);




		/*for (i = 93; i < 99; i++)
		{

			d = 100000000;
			al = a / d;
			ar = a % d;
			bl = b / d;
			br = b % d;
			cl = al + bl;
			cr = ar + br;
			num = (int) log10(al) + 1;
			A = (al << num) | ar;
			numm = (int) log10(bl) + 1;
			B = (bl << numm) | br;
			nummc = (int) log10(cl) + 1;
			C = (cl << nummc) | cr;
			C = A + B;
			A = B;
			B = C;

			printf("%lu, ", C);

		}*/






	return (0);
}


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

	unsigned long int i, c, al, bl, cl, ar, d, br, cr; /*at, ab, bt, bb, ck ,ct; A, B, C, num, numm, ar, br nummc;*/


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
	/*printf("\n%lu\n", ar);*/
	/*printf("\n%lu %lu", ar br*/
	/*printf("\n%lu%lu", cl, cr);*/


	for (i = 0; i < 3; i++)
	{
		cl = al + bl;
		cr = ar + br;
		al = bl;
		ar = br;
		bl = cl;
		br = cr;
		printf("%lu%lu,  ", cl, cr);
	}


	for ( i = 0; i < 3; i++)
		
	{
		cl = al + bl;
		cr = ar + br;
		al = bl;
		ar = br;
		bl = cl;
		br = cr;
		printf(i == 2 ? "%lu%lu" : "%lu%lu, ", (cl / 10), cr);

	}
		/*if ( i >= 5)
		{
			al = a / 1000000000000000;
			ar = a % 100000000000000;
			bl = b / 1000000000000000;
			br = b % 100000000000000;
			cl = al + bl;
			cr = ar + br;*/

			/*printf("\ndog%lu.%lu, ", cl, cr);*/


	/*at = 8362114348984842297 / 1000000000000000;
	ac = 8362114348984842297 % 1000000000000000;
	printf("%lu..%lu", at, ac);*/
	/*ab =  al / 10;*/

	/*for (i = 0; i < 3; i++)*/
	/*{


			 d = 1000000000000;
			 k = 1000000000000000;
			 al = a / d;
			 ar = a % k;
			 bl = b / d;
			 br = b % k;
			 cl = al + bl;
			 cr = ar + br;*/
			 /*cl = ab + bl;
			 cr = ar + br;
			 ab = bl;
			 ar = br;
			 bl = cl;
			 br = cr;
			 printf("\n.%lu..", ab);
			 printf("\n%lu%lu, ", cl, cr);
	}*/




			 /* al = a / 1000000000000;
			bl = a / 1000000000000;
			printf("\n%lu%lu, ", cl, cr);

			printf("\n%lu . %lu", al, ar);*/

	/*at = al;
	ab = ar;
	bt = bl;
	bb = br;
	ck = at + bt;
	ct = ab + bb;

	for ( i = 0; i <= 3; i++)
	{
		ck = at + bt;
		ct = ab + bb;
		at = bt;
		ab = bb;
		bt = ck;
		bb = ct;
		printf(" Donkey\n%lu...%lu, ", ck, ct);
	}*/









	return (0);
}


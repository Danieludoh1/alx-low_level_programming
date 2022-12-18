#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Print the last digit of
 * number stored in variable n
 * Return: 0
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	int x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0", n);
	}

	return (0);
}

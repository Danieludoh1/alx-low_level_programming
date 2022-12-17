#include <stdio.h>

/**
  * main - prints the size of various types on the computer
  * it is compiled and run on
  * Return: always 0
  */

int main (void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf ("Size of short: %ld byte(s)\n", sizeof(short));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("size of long: %ld byte(s)\n", sizeof(long));
	printf("size of long long: %ld byte(s)\n", sizeof(long long));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	printf("Size Of double: %ld byte(s)\n", sizeof(double));
	printf("Size of long double: %ld byte(s)\n", sizeof(long double));
	return (0);
}


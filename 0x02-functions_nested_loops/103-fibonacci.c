#include <stdio.h>
#include "main.h"
/**
 *
 * Description: Prints The even fibonacci seequence below 4000000,
 * Followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
    long a = 0;
    long b = 1;
    long c = 0;
    long sum = 0;

    while (c <= 4000000)
    {
        c = a + b;
        a = b;
        b = c;
        if (c % 2 == 0) {
            sum += c;
        }
    }
    printf("%ld\n", sum);
    return (0);
}


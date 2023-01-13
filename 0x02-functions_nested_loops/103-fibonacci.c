#include <stdio.h>

int main(void)
{
    long long a = 0; // initialize a as the first Fibonacci number
    long long b = 1; // initialize b as the second Fibonacci number
    long long c = 0; // initialize c as the next Fibonacci number
    long long sum = 0; // initialize sum to keep track of the even Fibonacci numbers

    while (c <= 4000000) { // continue looping as long as c is less than 4,000,000
        c = a + b; // calculate the next Fibonacci number
        a = b; // update a to be the previous b
        b = c; // update b to be the current c
        if (c % 2 == 0) { // check if c is even
            sum += c; // add c to the sum
        }
    }
    printf("%lld\n", sum); // print the sum of the even Fibonacci numbers
    return (0);
}


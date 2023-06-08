#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: first number of bits.
 * @m: second number of bits.
 * Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, count = 0;
unsigned long int new;
unsigned long int exclusive = n ^ m;

for (j = 63; j >= 0; j--)
{
new = exclusive >> j;
if (new & 1)
count++;
}

return (count);
}

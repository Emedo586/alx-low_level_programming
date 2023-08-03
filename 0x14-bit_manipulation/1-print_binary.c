#include "main.h"

/**
 * print_binary - To print binary representation of a number
 * @n:number represented by binary.
 *
 * Return: 0 success.
 *
 */
void print_binary(unsigned long int n)
{
int bit = 8 * sizeof(n), printed = 0;
while (bit)
{
if (n & 1L << --bit)
{
_putchar('1');
printed++;
}
else if (printed)
_putchar('0');
}
if (!printed)
_putchar('0');
}

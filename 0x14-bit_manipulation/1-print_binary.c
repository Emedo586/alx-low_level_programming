#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: as number for binary representation.
 * Return: void
 */

void print_binary(unsigned long int n)
{
int k = sizeof(n) *8, print = 0;
while (k)
{
if (n & 1l << --k)
{
_putchar('1');
print++;
}
else if (print)
_putchar('0');
}
if (!print)
_putchar('0');
}

#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: number of binary as string
 * Return: unsigned int for binary number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
val = val * 2 + (*b++ - '0');
}
return (val);
}

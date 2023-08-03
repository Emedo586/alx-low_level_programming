#include "main.h"

/**
 * binary_to_uint - To convert a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number.
 *
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int j = 0;
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
j = j * 2 + (*b++ - '0');
}
return (j);
{
if (!b)
return (0);
}
}

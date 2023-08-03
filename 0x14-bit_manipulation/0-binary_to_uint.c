#include "main.h"

/**
 * binary_to_uint - To convert a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number.
 *
 */
unsigned int binary_to_uint(const char *b)
{
int j;
unsigned int num = 0;
if (!b)
return (0);
for (j = 0; b[j]; j++)
{
if (b[j] != '0' && b[j] != '1')
return (0);
num = num * 2 + (b[j] - '0');
}
return (num);
}

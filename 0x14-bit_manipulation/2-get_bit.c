#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number of bit in a given index.
 * @index: bit to be obtainer.
 * Return:value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (n >> index & 1);
}

#include "main.h"

/**
 * main -  if c is a uppercase character
 * @c: input for alphabet
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

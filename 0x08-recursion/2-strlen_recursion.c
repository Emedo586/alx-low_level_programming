#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: pointer to the string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}

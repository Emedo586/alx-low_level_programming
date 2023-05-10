#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: pointer to the byte in 'i' that matches one of the bytes in 'accept'
 * or NULL if no such byte is found
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

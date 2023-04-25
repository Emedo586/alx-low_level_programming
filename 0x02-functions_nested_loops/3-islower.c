#include "main.h"
/**
  * _islower - Function that checks for lowercase character, shows 1 if input is lowercase or shows 0 if otherwise
  *
  * Return: 1 for lowercase character, 0 for the rest.
  */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

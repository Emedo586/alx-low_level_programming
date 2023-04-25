#include "main.h"
/**
  * _abs - computes the absolute value of an integer
  *
  * @i: inputs the number of an integer
  *
  * Return: Absolute value
  */
int _abs(int i)
{
if (i < 0)
{
int abs_val;

abs_val = i * -1;
return (abs_val);
}
return (i);
}

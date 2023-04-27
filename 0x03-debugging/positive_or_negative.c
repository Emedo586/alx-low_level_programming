#include "main.h"
/**
  *main - Determine if a number is positive or negative or zero
  *
  * Return: void
  */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is zero\n", i);
}
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible differnt combination of two-digits'
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0, j;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
if (i != j && i < j)
{
putchar(i + 48);
putchar(j + 48);
if (i + j != 17)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}
putchar('\n');
return (0);
}

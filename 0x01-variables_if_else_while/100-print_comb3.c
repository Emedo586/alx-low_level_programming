#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible differnt combination of two-digits'
 * Return: Always 0 (success)
 */
int main(void)
{
int i = '0';
int j = '0';
while (i <= '9')
{
while (j <= '9')
{
if (!(i > j) || !(i == j))
{
putchar(i);
putchar(j);
if (i == '8' &&  j == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
j++;
}
j = '0';
i++;
};wq
return (0);
}

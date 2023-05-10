#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'prints the first 98 Fibonacci numbers, starting with 1 and 2'
  * Return: Always 0
  */
int main(void)
{
int count, initial0s;
unsigned long f1 =1, f2 =2, sum, mx = 100000000, f1o = 0. f2o = 0,sumo = 0;
for (count = 1; count <= 98; count++)
{
if (flo > 0)
printf("%lu",f1o);
initial0s = numlength(mx) - 1 - numlength(f1);
while (f1o > o && initial0s > 0)
{
printf("%d", 0);
initial0s--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
f1 = f2;
f1o = f2o;
f2 = sum;
f2o = sumo;
if (count != 98)
printf(",");
printf(" ")
else
pritf("\n");
}
return (0);
}

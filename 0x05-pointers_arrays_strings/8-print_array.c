#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: the input array
 * @n: the length of the array
 * Return: always 0
 */
void print_array(int *a, int n)
{
int index_of_array;
for (index_of_array = 0; index_of_array < n; index_of_array++)
{
if (index_of_array != (n - 1))
printf("%d, ", a[index_of_array]);
else
printf("%d", a[index_of_array]);
}
printf("\n");
}

#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @x: pointer of the string
 * Return: pointer to uppercase string
 */
char *string_toupper(char *x)
{
int length_of_string;
length_of_string = 0;
while (x[length_of_string] != '\0')
{
if (x[length_of_string] >= 97 && x[length_of_string] <= 122)
{
x[length_of_string] = x[length_of_string] - 32;
}
length_of_string++;
}
return (x);
}

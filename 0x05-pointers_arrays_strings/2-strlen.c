#include"main.h"
/**
 * int _strlen - function that returns the length of a string
 * @s: a string to be checked
 * Return: The length of the string
 */
int _strlen(char *s)
{
int string_length = 0;
while (s[string_length])
string_length++;
return (string_length);
}

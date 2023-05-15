#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s:string
 * Return:int
 */
int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * str_concat - function that concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * Return:pointer to the newly allocated space in memory
 * containing the contents of s1 and s2 or NULL
 */
char *str_concat(char *s1, char *s2)
{
int i, size1, size2;
char *k;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
k = malloc((size1 + size2) *sizeof(char) + 1);
if (k == 0)
return (0);
for (i = 0; i <= size1 + size2; i++)
{
if (i < size1)
k[i] = s1[i];
else
k[i] = s2[i - size1];
}
k[i] = '\0';
return (k);
}

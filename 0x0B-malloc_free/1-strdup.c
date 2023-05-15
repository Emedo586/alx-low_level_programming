#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space,
 * in memory which contains a copy of the string given as a parameter.
 * @str: string
 * Return:pointer to duplicate string or NULL
 */
char *_strdup(char *str)
{
int i = 0, size = 0;
char *k;
if (str == NULL)
return (NULL);
for (; str[size] != '\0'; size++)
;
/* size +1 puts the end of the string character*/
k = malloc(size * sizeof(*str) + 1);
if (k == 0)
return (NULL);
else
{
for (; i < size; i++)
k[i] = str[i];
}
return (k);
}

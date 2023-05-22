#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of the string
 * @str: the string to get the length
 * Return: length of @str
 */
int _strlen(const char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src.
 * @dest: copy string to here
 * @src: string to copy
 * Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: struct pointer dog NULL if funnction fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
/*if name and owner are empty and age is less than zero return null*/
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).name == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}

#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: dog to init
 * @name: name of dog
 * @age:dog's age
 * @owner: name of the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

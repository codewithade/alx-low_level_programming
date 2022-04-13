#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *n, *o;
dog_t *d;
float a;

if (name == NULL || owner == NULL || age <= 0)
	return (NULL);

n = name;
o = owner;
a = age;

d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);

d->name = n;
d->age = a;
d->owner = o;

return (d);
}

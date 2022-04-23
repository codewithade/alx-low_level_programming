#include "dog.h"
#include <string.h>
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
dog_t *d;
char *n, *o;

if (name == NULL || owner == NULL || age <= 0)
	return (NULL);

d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);

n = strdup(name);
o = strdup(owner);

d->name = n;
d->age = age;
d->owner = o;

free(name);
free(owner);
return (d);
}

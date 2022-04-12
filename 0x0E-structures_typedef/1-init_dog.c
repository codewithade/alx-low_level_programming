#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize a dog data strutc
 *
 * @d: struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;
d->name = name;
d->age  = age;
d->owner = owner;
}

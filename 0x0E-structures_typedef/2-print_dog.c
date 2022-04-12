#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - printd dog details
 *
 * @d: struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
char *name;
char *owner;
float age;

if (d == NULL)
	return;
name = d->name;
owner = d->owner;
age = d->age;

if (name != NULL)
	printf("Name: %s\n", name);
if (age)
	printf("Age: %f\n", age);
if (owner != NULL)
	printf("Owner: %s\n", owner);
}

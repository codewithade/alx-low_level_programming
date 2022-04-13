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
char *temp;

temp = "(nil)";

if (d == NULL)
	return;
name = d->name;
owner = d->owner;
age = d->age;

if (name == NULL)
	name = temp;
if (owner == NULL)
	owner = temp;

printf("Name: %s\n", name);
printf("Age: %f\n", age);
printf("Owner: %s\n", owner);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to alloc mem
 *
 * @str: char array to fill mem
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
char *p;
int i, len;

i = 0;
len = _strlen(str);
p = malloc(sizeof(char) * len + 1);
if (p == NULL || str == NULL)
	return (NULL);
while (*(str + i) != '\0')
{
*(p + i) = *(str + i);
i++;
}
*(p + i) = '\0';
return (p);
}
/**
 * _strlen - returns length of string
 *
 * @s: pointer to char array
 *
 * Return: char arrray length
 */
int _strlen(char *s)
{
int i, count;

i = 0;
count = 0;
while (*(s + i) != '\0')
{
count++;
i++;
}
return (count);
}

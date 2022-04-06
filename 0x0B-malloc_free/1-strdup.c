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
if (str == NULL)
	return (NULL);
len = _strlen(str);
p = malloc(sizeof(char) * len);
if (p == NULL)
	return (NULL);
while (i < len)
{
*(p + i) = *(str + i);
i++;
}
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

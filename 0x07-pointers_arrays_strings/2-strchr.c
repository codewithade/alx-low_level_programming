#include <stdio.h>
#include "main.h"
/**
 * _strchr - returns a pointer tot he first occurrence of c
 *
 * @s: string of chars
 *
 * @c: character to find 
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i;

i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
	return (&(s[i]));
i++;
}
return (NULL);
}

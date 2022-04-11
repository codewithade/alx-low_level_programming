#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concats string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of bytes 
 *
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int l1, l2, total, i, temp;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

l1 = _strlen(s1);
l2 = _strlen(s2);

if (n < l2)
	l2 = n;
total = l1 + l2;
p = malloc(total);
if (p == NULL)
	return (NULL);
i = 0;
while (*(s1 + i) != '\0')
{
*(p + i) = *(s1 + i);
i++;
}
temp = i;
i = 0;
while (i < l2 && *(s2 + i) != '\0')
{
*(p + temp) = *(s2 + i);
i++;
temp++;
}
*(p + temp) = '\0';

return (p);
}
/**
 * _strlen - returns length of string
 *
 * @s: chr array
 *
 * Return: length of s
 */
unsigned int _strlen(char *s)
{
unsigned int i, count;

i = 0;
count = 0;
while (*(s + i) != '\0')
{
count++;
i++;
}
return (count);
}

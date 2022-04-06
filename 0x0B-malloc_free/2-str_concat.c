#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concat strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int i, l1, l2, len, temp;

i = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
l1 = _strlen(s1);
l2 = _strlen(s2);
len = l1 + l2;
p = malloc(sizeof(char) * len + 1);
if (p == NULL)
	return (NULL);
while (*(s1 + i) != '\0')
{
*(p + i) = *(s1 + i);
i++;
}
temp = i;
i = 0;
while (*(s2 + i) != '\0')
{
*(p + temp) = *(s2 + i);
temp++;
i++;
}
*(p + temp) = '\0';
return (p);
}
/**
 * _strlen - returns string length
 *
 * @s: pointer to char array
 *
 * Return: string length
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

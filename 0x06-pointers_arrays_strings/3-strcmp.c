#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
int i, len_s1, len_s2;
char d1, d2;

len_s1 = _strlen(s1);
len_s2 = _strlen(s2);
i = 0;
if (len_s1 < len_s2)
	return (-15);
if (len_s1 > len_s2)
	return (15);
while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
{
d1 = *(s1 + i);
d2 = *(s2 + i);
if (d1 < d2)
	return (-15);
if (d1 > d2)
	return (15);
i++;
}
return (0);
}

/**
 * _strlen - return string lenght
 *
 * @s: pointer to the string
 *
 * Return: Always 0 (Success)
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

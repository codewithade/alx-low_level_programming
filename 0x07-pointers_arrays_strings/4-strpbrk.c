#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - returns the number of bytes
 *
 * @s: string of chars
 *
 * @accept: character to find
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i, len;

len = _strlen(s);
for (i = 0; i < len; i++)
{
if (*(s + i) == *(accept + i))
	return (&s[--i]);
}
return (s);
}
/**
 * _strlen -  returns length of s
 *
 * @s: pointer to char array
 *
 * @Return: length of s
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

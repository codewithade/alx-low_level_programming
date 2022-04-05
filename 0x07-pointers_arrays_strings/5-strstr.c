#include <stdio.h>
#include "main.h"
/**
 * _strstr - finds first occurrence of str
 *
 * @haystack: the haystack
 *
 * @needle: the needle to find
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i, len;

len = _strlen(haystack);
for (i = 0; i < len; i++)
{
if (*(haystack + i) == *(needle + i))
	return (&haystack[--i]);
}
return (haystack);
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

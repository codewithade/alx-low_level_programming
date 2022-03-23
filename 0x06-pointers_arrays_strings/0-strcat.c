#include <stdio.h>
#include "main.h"
/**
 * _strcat - concantenates a string to buffer
 *
 * @dest: destination buffer
 *
 * @src: source to copy
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
int i, len, j;

len = _strlen(dest);
i = 0;
j = len;
while (*(src + i) != '\0')
{
*(dest + j) = *(src + i);
i++;
j++;
}
*(dest + j) = '\0';

return (dest);
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

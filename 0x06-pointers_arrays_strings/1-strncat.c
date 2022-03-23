#include <stdio.h>
#include "main.h"
/**
 * _strncat - concantenates a string to buffer
 *
 * @dest: destination buffer
 *
 * @src: source to copy
 *
 * @n: number of bytes from src
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i, len, j, count;

count = 0;
len = _strlen(dest);
i = 0;
j = len;
while (count < n && *(src + i) != '\0')
{
*(dest + j) = *(src + i);
i++;
j++;
count++;
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

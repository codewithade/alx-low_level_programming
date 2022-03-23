#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string to buffer
 *
 * @dest: destination buffer
 *
 * @src: source to copy
 *
 * @n: Number of bytes to copy from src
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int len_src, i, count;

len_src = _strlen(src);
count = 0;
i = 0;
while (count < n && *(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
count++;
}
if (len_src < n)
	*(dest + i) = '\0';

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

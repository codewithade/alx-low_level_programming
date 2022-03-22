#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string to buffer
 *
 * @dest: destination buffer
 *
 * @src: source to copy
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
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

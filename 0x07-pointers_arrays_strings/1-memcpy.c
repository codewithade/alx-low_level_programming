#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src
 *
 * @dest: destination memory area
 *
 * @src: source memory area
 *
 * @n: number of bytes of the memory area
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
}

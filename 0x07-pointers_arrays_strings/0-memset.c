#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area
 *
 * @b: constatnt byte
 *
 * @n: number of bytes of the memory area 
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
*(s + i) = '\0';
return (s);
}

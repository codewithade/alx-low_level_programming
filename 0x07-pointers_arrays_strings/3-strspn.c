#include <stdio.h>
#include "main.h"
/**
 * _strspn - returns the number of bytes
 *
 * @s: string of chars
 *
 * @accept: character to find 
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
int ret, j;

j = 1;
i = 0;
ret = is_pres(s, *(s + i), j);
while (ret)
{
ret = is_pres(s, *(s + i), j);
i++;
j++;
}
return (i);
}
/**
 * is_pres - checks if the char is pres
 *
 * @s: pointer to array of chars
 *
 * @c: char to check
 *
 * @j: number of chars to check
 *
 * @Return: 0 or 1
 */
int is_pres(char *s, char c, int j)
{
int i;

i = 0;
while (i < j && *(s + i) != '\0')
{
if (*(s + i) == c)
	return (1);
i++;
}
return (0);
}

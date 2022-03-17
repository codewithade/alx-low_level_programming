#include <stdio.h>
/**
 * _isupper - Entry point
 *
 * @c: Number to pass to _isupper function
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
int j;

for (j = 'A'; j <= 'Z'; j++)
{
if (j == c)
	return (1);
}
return (0);
}

#include <stdio.h>
/**
 * _isalpha - Entry point
 *
 * @c: Number to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
int i, j;

for (i = 'a', j = 'A'; i <= 'z'; i++, j++)
{
if (i == c || j == c)
	return (1);
}
return (0);
}

#include <stdio.h>
/**
 * _isdigit - Entry point
 *
 * @c: Number to pass to _isdigit function
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
int j;

for (j = 0; j <= 9; j++)
{
if (j == c || j + '0' == c)
	return (1);
}
return (0);
}

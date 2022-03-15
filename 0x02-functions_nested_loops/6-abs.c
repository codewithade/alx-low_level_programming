#include <stdio.h>
/**
 * _abs - Entry point
 *
 * @n: Number to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n == 0)
	return (0);
else if (n < 0)
	n = n * (-1);
else
	n = n * 1;
return (n);
}

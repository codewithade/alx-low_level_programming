#include <stdio.h>
/**
 * _islower - Entry point
 *
 * @c: Number to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int i;

for (i = 'a'; i <= 'z'; i++)
i{
if (i == c)
	return (1);
}
return (0);
}

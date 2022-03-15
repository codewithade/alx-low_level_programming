#include <stdio.h>
/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int i;

c = c + '0';
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
	return(1);
}
return (0);
}

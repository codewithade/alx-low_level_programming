#include <stdio.h>
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
char h1, h2, m1, m2;
int stop;

stop = 10;
for (h1 = 0; h1 < 3; h1++)
{
if (h1 == 2)
	stop = 4;
for (h2 = 0; h2 < stop; h2++)
{
for (m1 = 0; m1 < 6; m1++)
{
for (m2 = 0; m2 < 10; m2++)
{
putchar(h1 + '0');
putchar(h2 + '0');
putchar(':');
putchar(m1 + '0');
putchar(m2 + '0');
putchar('\n');
}
}
}
}
}

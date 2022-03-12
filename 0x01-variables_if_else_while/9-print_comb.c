#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

n = 0;
for (; n <= 9; n++)
{
putchar(n + '0');
if (n == 9)
   break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

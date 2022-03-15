#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *data, c;
int i;

i = 0;
data = "_putchar";
c = data[i];
while (c != '\0')
{
putchar(c);
i++;
c = data[i];
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * puts2 - reset a pointer
 *
 * @str: pointer to evaluate
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int i;

i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
	putchar(*(str + i));
i++;
}
putchar('\n');
}

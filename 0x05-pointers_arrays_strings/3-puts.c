#include <stdio.h>
/**
 * _puts - reset a pointer
 *
 * @str: pointer to evaluate
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i;

i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar('\n');
}

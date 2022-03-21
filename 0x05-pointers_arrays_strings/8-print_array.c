#include <stdio.h>
#include "main.h"
/**
 * print_array - reset a pointer
 *
 * @a: pointer to integer array
 *
 * @n: number of elements to evaluate
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int i;

if (n > 0)
{
for (i = 0 ; i < n - 1; i++)
{
printf("%d, ", *(a + i));
}
printf("%d\n", *(a + i));
}
else
{
putchar('\n');
}
}

/**
 * _strlen - return string lenght
 *
 * @s: pointer to the string
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int i, count;

i = 0;
count = 0;
while (*(s + i) != '\0')
{
count++;
i++;
}
return (count);
}

#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns string length
 *
 * @s: pointer to string to evaluate
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
int i, count;

i = 0;
count = 0;
if (*(s + i) != '\0')
{
return;
}
count++;
i++;
_strlen_recursion(*(s + i));
return count;
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

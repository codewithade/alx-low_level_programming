#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string
 *
 * @s: pointer to evaluate
 *
 * Return: encoded string
 */
char *leet(char *s)
{
int i;
char c;

i = 0;
while (*(s + i) != '\0')
{
c = get_code(*(s + i));
*(s + i) = c;
i++;
}
*(s + i) = '\0';
return (s);
}

/**
 * get_code - get the code for char
 *
 * @c: char to encode
 *
 * Return: Always the char
 */
char get_code(char c)
{
if (c == 'a' || c == 'A')
	return ('4');
else if (c == 'e' || c == 'E')
	return ('3');
else if (c == 'o' || c == 'O')
	return ('0');
else if (c == 't' || c == 'T')
	return ('7');
else if (c == 'l' || c == 'L')
	return ('1');
else
	return (c);
}

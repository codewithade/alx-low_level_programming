#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: ptr to string of 0's and 1's
 * Return: The converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res;
int i, power;
char bit;
if (b == NULL || is_validated(b) == 0)
	return (0);

i = _strlen(b) - 1;
res = 0;
power = 0;
while (i >= 0)
{
	bit = *(b + i);
	if (bit == '1')
		res += _pow(2, power);
	power++;
	i--;
}

return (res);
}
/**
 * _pow - returns the power of a number
 *
 * @base: base number
 * @power: power number
 * Return: result of evaluation
 */
int _pow(int base, int power)
{
int i, res;

i = 0;
res = 1;
while (i != power)
{
	res *= base;
	i++;
}

return (res);
}
/**
 * _strlen - calculates the string length
 *
 * @s: ptr to char array
 * Return: string length or -1(failure)
 */
int _strlen(const char *s)
{
int i, count;

if (s == NULL)
	return (-1);
i = 0;
count = 0;
while (*(s + i) != '\0')
{
	count++;
	i++;
}
return (count);
}
/**
 * is_validated - validates the passed numbers
 *
 * @b: char array to validate
 * Return: 1 (success) or 0 (failure)
 */
int is_validated(const char *b)
{
int i, len;
char bit;

if (b == NULL)
	return (0);
len = _strlen(b);
for (i = 0; i < len; i++)
{
	bit = *(b + i);
	if (bit == '0' || bit == '1')
		continue;
	else
		return (0);
}
return (1);
}

#include "main.h"
/**
 * print_binary - prints the binary representation of the number
 *
 * @n: number to convert to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
int power, res;

if (n < 1)
	putchar('0');
else
{
power = get_start_point(n);
res = n - _pow(2, power);
putchar('1');
power--;

while (power >= 0)
{
	if (res >= _pow(2, power))
	{
		res = res - _pow(2, power);
		putchar('1');
	}
	else
		putchar('0');
	power--;
}
}
}
/**
 * _pow - returns the power of a number
 *
 * @base: the base
 * @index: the index
 * Return: result
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
 * get_start_point - gets the index to start evaluating from
 *
 * @num: number to evaluate
 * Return: the closest power of 2
 */
int get_start_point(unsigned long int num)
{
unsigned long int i, bit;

i = 0;
bit = _pow(2, i);
while (num > bit)
{
	i++;
	bit = _pow(2, i);
}
if (num == bit)
	return (i);

return (i - 1);
}

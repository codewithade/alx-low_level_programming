#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
fizz_buzz();

return (0);
}
/**
 * fizz_buzz - Entry point
 *
 * Return: Always 0 (Success)
 */
void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
	printf("%s ", "FizzBuzz");
else if (i % 3 == 0)
	printf("%s ", "Fizz");
else if (i % 5 == 0)
	printf("%s ", "Buzz");
else
	printf("%d ", i);
}
putchar('\n');
}

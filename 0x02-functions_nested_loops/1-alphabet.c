#include <stdio.h>
/**
 * main - check te code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char ch;

ch = 'a';
for (; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}

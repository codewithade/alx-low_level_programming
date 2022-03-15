#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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

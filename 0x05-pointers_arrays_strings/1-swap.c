#include <stdio.h>
/**
 * reset_to_98 - reset a pointer
 *
 * @a: first pointer to evaluate
 *
 * @b: second pointer to evaluate
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

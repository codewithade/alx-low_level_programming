#include "lists.h"
/**
 * listint_len - returns the no. of elements in a lined list
 *
 * @h: pointer to linked list
 *
 * Return: Number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
int num;

num = 0;

while (h != NULL)
{
	num++;
	h = h->next;
}

return (num);
}

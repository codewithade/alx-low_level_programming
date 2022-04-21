#include "lists.h"
/**
 * list_len - returns the no of elemeents in a linked list
 *
 * @h: list to process
 *
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
int elements;

elements = 0;

while (h != NULL)
{
	h = h->next;
	elements++;
}

return (elements);
}

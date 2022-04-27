#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 *
 * @h: pointer to the listint_t structure
 *
 * Return: number of nodes in struct list
 */
size_t print_listint(const listint_t *h)
{
int nodes;

nodes = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	nodes++;
	h = h->next;
}

return (nodes);
}

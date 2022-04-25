#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at the specified index
 *
 * @head: first node of the linked list
 * @index: node index
 *
 * Return: the nth node og the listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c;

c = 0;

while (head != NULL && c != index)
{
	c++;
	head = head->next;
}

if (c == index && head != NULL)
	return (head);

return (NULL);
}

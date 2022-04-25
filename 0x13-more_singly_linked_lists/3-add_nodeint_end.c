#include "lists.h"
/**
 * add_nodeint_end - adds a new node to end of a linked list
 *
 * @head: pointer to first node
 * @n: data for the new node
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *last;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
	return (NULL);

temp->n = n;
temp->next = NULL;

if (*head == NULL)
	*head = temp;
else
{
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
}

return (*head);
}

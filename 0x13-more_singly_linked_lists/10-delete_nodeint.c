#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: pointer to the first node
 * @index: the index of the node to be deleted
 *
 * Return: 1 (success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *last, *prev, *current, *next;
unsigned int count;

if (head == NULL || *head == NULL)
	return (-1);

count = 0;
last = *head;
if (index == count && last->next != NULL)
{
	*head = (*head)->next;
	free(last);
	if ((*head)->next == NULL)
	{
		free(*(head));
		*head = NULL;
	}
	return (1);
}

while (last->next != NULL && count != (index - 1))
{
	last = last->next;
	count++;
}

if (count == (index - 1) && (last->next != NULL))
{
	prev = last;
	current = last->next;
	next = current->next;

	prev->next = next;
	last = prev;
	free(current);
	return (1);
}
return (-1);
}

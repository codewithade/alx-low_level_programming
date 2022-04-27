#include "lists.h"
/**
 * insert_nodeint_at_index - returns the node at specific index
 *
 * @head: pointer to first node
 * @idx: index where the new node needs to be added
 * @n: data for the new node
 *
 * Return: address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *last;
unsigned int count;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
	return (NULL);

temp->n = n;
temp->next = NULL;
count = 0;
last = *head;
if (*head == NULL && idx == 0)
{
	*head = temp;
	return (*head);
}
else if (idx == 0 && last->next != NULL)
{
	temp->next = last;
	*head = temp;
	return (*head);
}
else
{
	last = *head;
	while (last->next != NULL && count != (idx - 1))
	{
		last = last->next;
		count++;
	}

	if (count == (idx - 1) && (last->next != NULL))
	{
		temp->next = last->next;
		last->next = temp;
		return (*head);
	}

	if (last->next == NULL)
	{
		free(temp);
		return (NULL);
	}
}

return (NULL);
}

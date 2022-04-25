#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of linked list
 *
 * @head: pointer to first node
 * @n: data of the node to add
 *
 * Return: address of the new element ot NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
	return (NULL);

temp->n = n;
temp->next = *head;
*head = temp;

return (*head);
}

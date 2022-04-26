#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 *
 * @head: pointer to the first node
 *
 * Return: head node's data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

data = 0;

if (*head == NULL)
	return (data);

temp = *head;

*head = (*head)->next;

data = temp->n;

free(temp);
return (data);
}

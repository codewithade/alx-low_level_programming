#include "lists.h"
/**
 * free_listint2 - frees a listint_t and sets the head to NULL
 *
 * @head: pointer to head of node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head != NULL && (*head) != NULL)
	{
	while ((*head)->next != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
	head = NULL;
	}
}

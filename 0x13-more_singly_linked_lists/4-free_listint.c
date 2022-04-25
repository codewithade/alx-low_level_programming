#include "lists.h"
/**
 * free_listint - frees a linked list
 *
 * @head: pointer to first node on a linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = NULL;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

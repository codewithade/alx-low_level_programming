#include "lists.h"
/**
 * free_list - frees a list_t
 *
 * @head: poiter to head of list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = NULL;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

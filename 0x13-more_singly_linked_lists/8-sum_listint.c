#include "lists.h"
/**
 * sum_listint - sums all the data of a linked list
 *
 * @head: pointer to the first node
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

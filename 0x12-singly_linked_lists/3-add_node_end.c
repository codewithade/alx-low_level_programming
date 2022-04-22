#include "lists.h"
/**
 * add_node_end - adds node to end of linked list
 *
 * @head: pointer to head node
 * @str: array of char to add
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int len;
	list_t *temp, *last;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	s = strdup(str);
	len = _strlen(str);

	temp->str = s;
	temp->len = len;
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
/**
 * _strlen - evaluates length of string
 *
 * @s: ptr to array of chars
 *
 * Return: length of string or -1 if s is NULL
 */
int _strlen(const char *s)
{
int i, count;

if (s == NULL)
	return (-1);

i = 0;
count = 0;

while (*(s + i) != '\0')
{
	count++;
	i++;
}

return (count);
}

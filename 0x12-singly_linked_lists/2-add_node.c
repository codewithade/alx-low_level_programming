#include "lists.h"
/**
 * add_node - adds new node to start of a list
 *
 * @head: pointer to head
 * @str: node to add
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int len;

	list_t *temp = malloc(sizeof(list_t));
	if (temp == NULL || str == NULL)
		return (NULL);

	s = strdup(str);
	len = _strlen(str);

	temp->str = s;
	temp->len = len;
	temp->next = *head;
	*head = temp;

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

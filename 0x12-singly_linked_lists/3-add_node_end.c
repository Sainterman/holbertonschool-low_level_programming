#include "lists.h"
/**
 * add_node_end - add node at the end of linked list
 * @head: head of the linked list address
 * @str: address of first character in string.
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
/**
 * _strlen - Returns the length of a string.
 *
 * @s: address of first character in string.
 *
 * Return: integer length of a string.
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

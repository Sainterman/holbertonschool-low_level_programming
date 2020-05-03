#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of a doubly linked list
 * @head: pointer to address of list
 * @n: integer data
 * Return: address of new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}

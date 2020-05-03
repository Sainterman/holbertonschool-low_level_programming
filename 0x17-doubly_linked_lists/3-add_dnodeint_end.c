#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: address of poimnter to head of list
 * @n: The data to input in the new node
 * Return: Address of new node if possible to add
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (new);
}

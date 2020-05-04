#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node to a doubly linked list at index
 * @h: Address of doubli linked list's head
 * @idx: integer position in list to add
 * @n: integer data
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (idx > 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		idx--;
	}

	if (temp->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	new->next->prev = new;
	temp->next = new;
	return (new);
}

#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: Address of pointer to head of list
 * @n: data to insert in node
 * Return: address to head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/* fill new node with data*/
	new->n = n;
	new->next = NULL;
	/* return new node or head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		(*head)->next = add_nodeint_end(&(*head)->next, n);
	}
	return (*head);

}

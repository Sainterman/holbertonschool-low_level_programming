#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of list
 * @idx: position to insert new node
 * @n: data of new node
 * Return: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (idx > 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		idx--;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);

}

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
	unsigned int node = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (temp != NULL)
	{
		if (idx == 0)
		{
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}
		if (node == idx - 1)
		{
			new->next = temp->next;
			new->n = n;
			temp->next = new;
			return (new);
		}
		else
		{
			node++;
			temp = temp->next;
			if (temp->next == NULL)
				return (temp);
		}
	}
	return (NULL);
}

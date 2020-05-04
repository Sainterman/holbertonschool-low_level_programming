#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index from doubly linked list
 * @head: Address to start of a list
 * @index: node to delete
 * Return: 1 if delete usccesful -1 othwrwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *newhead = *head;

	if (!(*head))
		return (-1);
	temp = *head;
	if (index == 0)
	{
		newhead = newhead->next;
		if (newhead)
			newhead->prev = NULL;
		free(*head);
		(*head) = newhead;
		return (1);
	}
	while (index > 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	temp->next = temp->next->next;
	free(temp->next->prev);
	temp->next->prev = temp;
	return (1);
}

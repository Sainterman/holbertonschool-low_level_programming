#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node in a doubli linked list
 * @head: head of list
 * @index: Node to search and return
 * Return: address of the nth node dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (head != NULL)
	{
		if (node == index)
		{
			return (head);
		}
		node++;
		head = head->next;
	}
	return (NULL);

}

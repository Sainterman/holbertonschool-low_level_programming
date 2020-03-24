#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: Head of list
 * @index: Node to search and return
 * Return: address of  nth node listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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

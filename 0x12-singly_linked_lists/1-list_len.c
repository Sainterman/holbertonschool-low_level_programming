#include "lists.h"
/**
 * list_len - function that returns the number of
 * lements in a linked list_t list
 * @h: pointer to head node of list_t
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

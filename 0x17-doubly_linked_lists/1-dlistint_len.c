#include "lists.h"

/**
 * dlistint_len - return the lenght of a doubly linked list
 * @h: pointer to the head of list
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{

	if (h == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}

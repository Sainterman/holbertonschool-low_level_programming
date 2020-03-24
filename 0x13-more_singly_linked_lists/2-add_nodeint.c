#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: pointer to address of list to add elements at the start
* @n: data to add in each node
* Return: address of new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

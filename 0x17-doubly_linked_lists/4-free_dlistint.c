#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: Addres of start in list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

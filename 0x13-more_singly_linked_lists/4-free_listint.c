#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: Address to head of listint_t list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: address of listint_t list's head
 * Return: always void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	temp = *head;

	while (*head != NULL)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}

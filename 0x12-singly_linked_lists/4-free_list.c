#include "lists.h"
/**
 * free_list - free the list_t at head
 * @head: address of list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	temp = head;
	
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
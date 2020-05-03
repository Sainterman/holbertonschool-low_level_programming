#include "lists.h"

/**
 * sum_dlistint - sum of all the data ina doubliy linked list
 * @head: Address to head of list
 * Return: integer sum of data at nodes odf doublky linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

#include "lists.h"

/**
 *sum_dlistint - return the sum
 *@head: head node
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}

	return (total);
}

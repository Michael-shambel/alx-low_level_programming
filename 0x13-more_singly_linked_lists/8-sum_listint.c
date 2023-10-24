#include "lists.h"

/**
 * sum_listint - return sum of all data
 * @head: head of node
 *
 * Return: int sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *delete = head;

	while (delete)
	{
		total = total + delete->n;
		delete = delete->next;
	}
	return (total);
}

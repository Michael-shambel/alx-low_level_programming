#include "lists.h"

/**
 * pop_listint - delete the head
 * @head:  first element
 *
 * Return: orginal datalist
 */
int pop_listint(listint_t **head)
{
	listint_t *dlete;
	int count;

	if (!head || !*head)
		return (0);
	count = (*head)->n;
	dlete = (*head)->next;
	free(*head);
	*head = dlete;
	return (count);
}

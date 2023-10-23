#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: pointer list to be frees
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL)
		return;
	while (*head)
	{
		freed = (*head)->next;
		free(*head);
		*head = freed;
	}
	*head = NULL;
}

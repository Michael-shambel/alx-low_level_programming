#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: list to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}

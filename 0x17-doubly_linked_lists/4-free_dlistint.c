#include "lists.h"

/**
 *free_dlistint - frees a list
 *@head: double pointer
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}

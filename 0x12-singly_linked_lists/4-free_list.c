#include "lists.h"

/**
 *free_list - free lists
 *@head: head of node
 *
 * Return: nothing
 *
 */

void free_list(list_t *head)
{
	list_t *del;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		del = head->next;
		free(head->str);
		free(head);
		head = del;
	}
	free(head->str);
	free(head);
}

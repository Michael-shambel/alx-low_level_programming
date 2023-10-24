#include "lists.h"

/**
 * delete_nodeint_at_index- delete the index node
 * @head: head of node
 * @index: index to be delete
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete = *head;
	listint_t *present = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	for (x = 0; x < index - 1; x++)
	{
		if (!delete || !(delete->next))
			return (-1);
		delete = delete->next;
	}

	present = delete->next;
	delete->next = present->next;
	free(present);
	return (1);
}


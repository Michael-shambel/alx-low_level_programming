#include "lists.h"

/**
 * get_nodeint_at_index - return the desired index node
 * @head: head of node
 * @index: index of node printed
 *
 * Return: node what looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *delete = head;

	while (delete && x < index)
	{
		delete = delete->next;
		x++;
	}
	return (delete ? delete : NULL);
}

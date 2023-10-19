#include "lists.h"

/**
 * list_len - find number of elemennt
 * @h: head
 *
 * Return: length of node
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}

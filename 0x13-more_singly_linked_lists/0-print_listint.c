#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the element of list
 * @h: pointer of head
 *
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		printf("%d\n", h->n);
		h = h->next;

	}

	return (element);
}

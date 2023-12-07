#include "lists.h"

/**
 *dlistint_len - count the number of element
 *@h: node
 *
 *Return: Number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_element = 0;

	while (h != NULL)
	{
		number_element++;
		h = h->next;
	}
	return (number_element);
}

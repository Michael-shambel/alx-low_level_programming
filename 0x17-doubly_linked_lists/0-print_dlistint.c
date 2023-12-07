#include "lists.h"
/**
 *print_dlistint - print th elements
 *@h: head pointer
 *
 *Return: number of node
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_N = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_N++;
	}
	return (count_N);
}

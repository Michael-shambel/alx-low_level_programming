#include "lists.h"

/**
 *get_dnodeint_at_index - return the indexed node
 *@head: double pointer head
 *@index: index of the node
 *
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; head != NULL; x++)
	{
		if (x == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}

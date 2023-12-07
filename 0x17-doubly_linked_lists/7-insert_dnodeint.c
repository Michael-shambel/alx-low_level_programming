#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *temp;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	temp = *h;

	if (node == NULL)
		return (NULL);

	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;

		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}

	while (i < idx  - 1)
	{
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;

	if (temp->next != NULL)
	{
		temp->next = node;
	}
	temp->next = node;
	node->prev = temp;

	return (node);
}

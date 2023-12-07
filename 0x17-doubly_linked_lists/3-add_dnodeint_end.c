#include "lists.h"

/**
 *add_dnodeint_end - add a new node at hte end
 *@head: double pointer head
 *@n: element to be added
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *new_h;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}
	new_h = *head;

	while (new_h->next != NULL)
	{
		new_h = new_h->next;
	}
	new_h->next = end_node;
	end_node->prev = new_h;
	return (end_node);
}

#include "lists.h"

/**
 * add_nodeint_end - add node at the end of lists
 * @head: head of a list
 * @n: node to be included
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *end;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = add;
	}
	return (*head);
}

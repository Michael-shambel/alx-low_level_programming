#include "lists.h"

/**
 * add_nodeint - add node at the tip
 * @head: head of lists
 * @n: new node to be inserted
 *
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}

#include "lists.h"

/**
 *insert_nodeint_at_index - return inserted new node
 *@head: head node
 *@idx: index of lists
 *@n: place where the node inserted
 *
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *delete = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
	return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
	new->next = *head;
	*head = new;
	return (new);
}
for (i = 0; delete && i < idx; i++)
{
	if (i == idx - 1)
	{
		new->next = delete->next;
		delete->next = new;
		return (new);
	}
	else
		delete = delete->next;
}
return (NULL);
}

#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: head of a list
 *
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *befor = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = befor;
		befor = *head;
		*head = after;
	}
	*head = befor;
	return (*head);
}

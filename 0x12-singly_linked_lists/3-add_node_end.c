#include "lists.h"

/**
 *add_node_end - add node at the end of a line
 *@head: head of node
 *@str: string
 *
 *Return: new element
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element, *del;
	unsigned int x = 0, size = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	while (str[x] != '\0')
	{
		size++;
		x++;
	}
	new_element->len = size;
	new_element->next = NULL;
	del = *head;

	if (del == NULL)
		*head = new_element;
	else
	{
		while (del->next != NULL)
			del = del->next;
		del->next = new_element;
	}
	return (*head);
}

#include "lists.h"

/**
 * add_node - add node at the first line
 * @head: head of node
 * @str: string
 *
 * Return: new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int x, size = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		size++;
	new_element->len = size;
	new_element->next = *head;
	*head = new_element;

	return (*head);
}

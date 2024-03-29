#include "hash_tables.h"
/**
 * hash_table_set - add element to the table
 *@ht: hash table
 *@key: key value
 *@value: the value
 *
 * Return: 1 if completed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *now;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	now = ht->array[index];
	while (now != NULL)
	{
		if (strcmp(now->key, key) == 0)
		{
			free(now->value);
			now->value = strdup(value);
			if (now->value == NULL)
				return (0);
			return (1);
		}
		now = now->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->value == NULL || new_node->key == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

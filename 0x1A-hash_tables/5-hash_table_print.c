#include "hash_tables.h"
/**
 *hash_table_print - print table
 *@ht: hash table
 *
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = NULL;
	int sign = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (sign == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			sign = 1;
			current = current->next;
		}
	}
	printf("}\n");
}

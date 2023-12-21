#include "hash_tables.h"
/**
 *
 *
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;
	unsigned long int index;

	hash_code = hash_djb2(key);
	index = hash_code % size;
	return index;
}

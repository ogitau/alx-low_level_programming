#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value of associated key
 * @ht: table to be manipulated
 * @key: key to be found
 * Return: value and its associated key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *search = NULL;
	unsigned long int idx;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	search = ht->array[idx];
	while (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
			return (search->value);
	}
	return (NULL);
}

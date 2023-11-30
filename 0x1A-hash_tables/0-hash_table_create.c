#include "hash_tables.h"

/**
 * hash_table_create - function that creates a new hash table
 * @size: number of hash tables
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int index;

	if (size > 0)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (new_table == NULL)
			return (NULL);
		new_table->array = malloc(sizeof(hash_node_t *) * size);
		if (new_table->array == NULL)
		{
			free(new_table);
			return (NULL);
		}
		new_table->size = size;
		for (index = 0; index < size; index++)
			new_table->array[index] = NULL;
		return (new_table);
	}
	return (NULL);
}

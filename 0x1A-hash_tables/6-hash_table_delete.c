#include "hash_tables.h"

/**
  * hash_table_delete - frees a hash table
  * @ht: the hash table to free
  * Return: nothing, void
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *next;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if(ht->array[idx] != NULL)
		{
			head = ht->array[idx];
			while (head != NULL)
			{
				next = head->next;
				if (head->value != NULL)
					free(head->value);
				if (head->key != NULL)
					free(head->key);
				free(head);
				head = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}

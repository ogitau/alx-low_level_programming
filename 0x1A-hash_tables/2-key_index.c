#include "hash_tables.h"

/**
 * key_index - finds the index key
 * @key: string to be stored
 * @size: size of the array
 * Return: the index element
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;

	return (i);
}

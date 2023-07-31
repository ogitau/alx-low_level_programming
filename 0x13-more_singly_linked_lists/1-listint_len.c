#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function to return number of elements in a list
 * @h: pointer to the struct
 * Return: no of elements in a lists
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

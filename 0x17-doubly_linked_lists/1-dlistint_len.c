#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int index;

	index = 0;

	if (h == NULL)
		return (index);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}

#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all elements
 * @h: pointer to the struct
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	unsigned int index;

	index = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}

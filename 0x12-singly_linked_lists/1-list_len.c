#include "lists.h"
#include <stdio.h>
/**
 * list_len - function to list the length of a node
 * @h: pointer to the struct node
 * Return: the length of the node
 */
size_t list_len(const list_t *h)
{
	unsigned int counter;
	const list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (0);
	temp = h;
	counter = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}

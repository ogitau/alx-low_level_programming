#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - function to print contents of a node
 * @h: pointer to struct of a node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int index;
	const list_t *temp = NULL;

	index = 0;
	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s", temp->len, temp->str);
		temp = temp->next;
		index++;
	}
	return (index);
}

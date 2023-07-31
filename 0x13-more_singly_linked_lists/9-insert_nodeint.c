#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - function to insert node at the nth index
 * @head: pointer to the head node of our string
 * @idx: location to add our node
 * @n: int type for our node value
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL && counter < (idx - 1))
	{
		temp = temp->next;
		counter++;
	}

	while (counter != (idx - 1))
	{
		temp = temp->next;
		counter++;
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

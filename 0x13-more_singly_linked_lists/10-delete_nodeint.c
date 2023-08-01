#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes node at index
 * @head: pointer to the head of our node
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp = *head;
	unsigned int count;

	if(temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (count = 0;count < (index - 1); count++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);
	return (1);
}

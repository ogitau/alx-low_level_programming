#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function to remove node from the top
 * @head: pointer to the head node
 * Return: the data of nth head node
 */
int pop_listint(listint_t **head)
{
	listint_t *start = NULL;
	int temp = 0;

	if (*head == NULL)
	{
		return (0);
	}
	start = *head;
	temp = start->n;
	*head = start->next;
	free(start);
	return (temp);
}

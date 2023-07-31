#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function to add node at the end of our struct
 * @head: pointer to our head of oour struct
 * @n: constant of type int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start = NULL;
	listint_t *temp = NULL;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	if (*head == NULL)
	{
		*head = start;
		start->next = NULL;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = start;
	start->next = NULL;
	return (*head);
}

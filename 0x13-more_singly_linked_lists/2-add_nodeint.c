#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to add node at the beginning of a struct
 * @head: pointer to the head of listint_t
 * @n: constant of type int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start = NULL;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);
	start->n = n;
	start->next = *head;
	*head = start;
	return (*head);
}

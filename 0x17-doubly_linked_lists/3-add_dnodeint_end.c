#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *top = NULL;
	dlistint_t *temp = NULL;

	top = malloc(sizeof(dlistint_t));
	if (top == NULL)
		return (NULL);
	top->n = n;
	if (*head == NULL)
	{
		*head = top;
		top->next = NULL;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = top;
	top->next = NULL;

	return (*head);
}

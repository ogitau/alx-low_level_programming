#include "lists.h"
#include <stdio.h>

size_t looped_listint_y(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
  * looped_listint_n - functions that counts unique nodes
  * @head: head the node
  * Return: number of unique nodes
  */
size_t looped_listint_n(const listint_t *head)
{
	const listint_t *i, *j;
	size_t k = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	i = head->next;
	j = (head->next)->next;
	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				k++;
				i = i->next;
				j = j->next;
			}

			i = i->next;
			while (i != j)
			{
				k++;
				i = i->next;
			}
			return (k);
		}
			i = i->next;
			j = (j->next)->next;
	}

	return (0);
}


/**
  * print_listint_safe - function that prints a listint_t linked list
  * @head: the head of the linked list
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t k, index = 0;

	k = looped_listint_n(head);

	if (k == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
	}
	else
	{
		while (index < k)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (k);
}

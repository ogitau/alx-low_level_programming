#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_count(const listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
  * looped_listint_count - functions that counts unique nodes
  * @head: head the node
  * Return: number of unique nodes
  */
size_t looped_listint_count(const listint_t *head)
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
 * free_listint_safe - the function to free the list
 * @h: pointer to the head
 * Return: size of the list to be freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t k, index;

	k = looped_listint_count(*h);

	if (k == 0)
	{
		for (; h != NULL && *h != NULL; k++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < k; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	return (k);
}

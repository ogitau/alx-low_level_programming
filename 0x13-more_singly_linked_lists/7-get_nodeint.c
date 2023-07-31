#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node
 * @head: the pointer of the head of our list
 * @index: the index of the nth node
 * Return: the node at the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 0;
	while (head != NULL)
	{
		if (index == count)
		{
			tmp = head;
			return (tmp);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}

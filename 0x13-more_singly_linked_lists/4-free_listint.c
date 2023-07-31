#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function to free heap
 * @head: pointer to head of our struct
 * Return: 0 on success
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

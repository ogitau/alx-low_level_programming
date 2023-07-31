#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function to free our listint_t
 * @head: pointer to the head of our listint_t
 * Return: 0 on sucess
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp1 = NULL;

	if (head == NULL)
		return;
	temp = *head;
		while (temp != NULL)
		{
			temp1 = temp;
			temp = temp->next;
			free(temp1);
		}
	*head = NULL;
}

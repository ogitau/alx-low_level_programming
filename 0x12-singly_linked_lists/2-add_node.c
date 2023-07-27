#include "lists.h"
#include <string.h>
/**
 * *add_node - pointer to add node to start of list_t
 * @head: double pointer to list_t
 * @str: pointer to string input
 * Return: the head of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	temp->len = count;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (*head);
}

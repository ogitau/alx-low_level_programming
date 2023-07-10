#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create array of  character
 * @size: size of the array
 * @c: character of size
 * Return: the chracter
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *t;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		t[x] = c;
	return (t);
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to check allocated memory
 * @b: integer to check
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}

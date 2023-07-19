#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function for elements of an array
 * @array: pointer to our array
 * @size: the size of the array
 * @action: the pointer to the function in use
 * Return: 0 on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}

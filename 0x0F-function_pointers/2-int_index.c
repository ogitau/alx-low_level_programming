#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array to be traversed
 * @size: the size of the array
 * @cmp: pointer to the function int_index
 * Return: index of cmp int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return - the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);
	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%u] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}

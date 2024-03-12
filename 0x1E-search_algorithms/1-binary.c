#include "search_algos.h"

/**
 *binary_search - searches for a value in an array of integers
 *using the Linear search algorithm
 *
 *@array: Pointer to the first element in an array
 *@size: Number of elements in an array
 *@value: Value being searched for
 *
 * Return: 0 on success and -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t left = 0, right = size - 1, midd;

	if (array != NULL)
	{
		while (left <= right)
		{
			midd = (left + right) / 2;
			printf("Searching in array: ");
			for (idx = left; idx < right; idx++)
			{
				printf("%d, ", array[idx]);
			}
			printf("%d\n", array[idx]);

			if (array[midd] < value)
			{
				left = midd + 1;
			} else if (array[midd] > value)
			{
				right = midd - 1;
			}
			else
			{
				return (midd);
			}
		}
	}
	return (-1);
}

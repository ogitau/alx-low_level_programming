#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 or index of value
 */
int jump_search(int *array, size_t size, int value)
{
	int block, step;
	int holder = 0;

	if (array == NULL)
		return (-1);

	block = sqrt((int)size);
	step = block;
	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
	while (array[block] <= value && block <= (int)size - 1)
	{
		if (array[0] == value || array[block] == value)
			break;
		holder = block;
		printf("Value checked array[%d] = [%d]\n", holder, array[block]);
		block = block + step;
	}

	printf("Value found between indexes [%d] and [%d]\n", holder, block);
	while (holder <= block)
	{

		if (holder >= (int)size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
		if (array[holder] == value)
			return (holder);
		holder++;
	}
	return (-1);
}

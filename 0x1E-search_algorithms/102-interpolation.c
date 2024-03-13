#include "search_algos.h"

/**
  * interpolation_search - performs said search in a sorted array
  * @array: first element pointer
  * @size: amount of bytes
  * @value: what you lookin for
  * Return: Index else -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t idx, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		idx = lt + (((double)(rt - lt) / (array[rt] - array[lt])) *
				(value - array[lt]));
		if (idx < size)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", idx);
			break;
		}

		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			rt = idx - 1;
		else
			lt = idx + 1;
	}

	return (-1);
}

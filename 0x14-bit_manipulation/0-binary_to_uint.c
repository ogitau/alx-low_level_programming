#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to char string input
 * Return: always successful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int index;

	if (b == NULL)
		return (0);
	index = 0;
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[index] == '1')
		{
			count ^= check;
		}
		index++;
	}
	return (count);
}

#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to the string input
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[i] == '1')
		{
			count ^= check;
		}
		i++;
	}
	return (count);
}

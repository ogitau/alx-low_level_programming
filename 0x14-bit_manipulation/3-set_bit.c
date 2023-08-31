#include "main.h"

/**
 * set_bit - function to st bits at an index
 * @n: bit to be set at an index
 * @index: index to set the bit
 * Return: 1 if true -1 if false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index  < sizeof(n) *  8)
	{
		*n =  *n | (1 << index);
		return (1);
	}
	return (-1);
}

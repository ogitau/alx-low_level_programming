#include "main.h"
/**
 * set_bit - function that sets bit at a given index
 * @n: pointer to a bit
 * @index: the index of bit to be set
 * Return: 1 if  sucessful and 0 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}

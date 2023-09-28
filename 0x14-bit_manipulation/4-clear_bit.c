#include "main.h"

/**
 * clear_bit - function to clear bit at an index
 * @n: the bit to clear at the index
 * @index: index to clear a bit
 * Return: 1 if true -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;
	unsigned int size = sizeof(n) * 8;

	if (*n == '\0')
		return (-1);
	if (index > size)
		return (-1);
	check <<= index;
	*n &= ~check;
	return (1);
}

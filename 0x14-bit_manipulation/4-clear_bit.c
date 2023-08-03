#include "main.h"
/**
 * clear_bit - function to set bit ata given index to 0
 * @n: pointer to the bit to be manipulated
 * @index: the index of the bit to be changed
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c = 1;
	unsigned int size = sizeof(n) * 8;

	if (*n == '\0')
		return (-1);
	if (index > size)
		return (-1);
	c <<= index;
	*n &= ~c;
	return (1);
}

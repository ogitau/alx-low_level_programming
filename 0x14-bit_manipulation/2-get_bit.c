#include "main.h"
/**
 * get_bit - function that returns value of a bit at a given index
 * @n: unsigned int of type long
 * @index: index of bit to be returned
 * Return: value of bit at an index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	c <<= index;
	if (c & n)
		return (1);
	else
		return (0);
}

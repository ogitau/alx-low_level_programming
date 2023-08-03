#include "main.h"
/**
 * count_bits - function to count set bits
 * @n: the set bits
 * Return: number of set bits
 */
unsigned int count_bits(unsigned long int n)
{
	unsigned int c = 0;

	while (n)
	{
		c += n &  1;
		n >>= 1;
	}
	return (c);
}
/**
 * flip_bits - function to return number of bits to be flipped
 * @n: the bits to be flipped
 * @m: unsigned int of type long
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}

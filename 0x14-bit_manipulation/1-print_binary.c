#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - function to convert number to binary
 * @n: unsigned int of type long
 * Return: binary representations of numbers
 */
void print_binary(unsigned long int n)
{
	unsigned long int check;
	unsigned int size = sizeof(n) * 8;
	unsigned int c;
	unsigned int flag = 1;

	c = 0;

	while (c < size)
	{
		check = (n << 1);
			check >>= 1;
		if (n != check)
		{
			flag = 0;
			write(1, "1", 1);
		}
		else if (!flag)
		{
			write(1, "0", 1);
		}
		n <<= 1;
		c++;
	}
	if (flag == 1)
		write(1, "0", 1);
}

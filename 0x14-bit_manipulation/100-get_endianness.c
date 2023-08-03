#include "main.h"
/**
 * get_endianness - function that checks for endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	else
		return (0);
}

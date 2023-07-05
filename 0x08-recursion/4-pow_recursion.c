#include "main.h"
/**
 * _pow_recursion - function to give power of int
 * @x: the integer to power
 * @y: the power to multiply to x
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}

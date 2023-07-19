#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function to add the numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of the numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract the numbers
 * @a: the first number
 * @b: the second number
 * Return: the diffrence of the numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to find the product of two numbers
 * @a: the first numbers
 * @b: the second number
 * Return: the product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide two numbers
 * @a: the first number
 * @b: the second number
 * Return: the result of the division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to find the modulo of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}


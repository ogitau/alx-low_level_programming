#include "main.h"
/**
 * _strlen_recursion - function to count the length of a recursion string
 * @s: the string to find the length
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}

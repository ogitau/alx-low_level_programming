#include "main.h"
/**
 * factorial - function to give fuctorial of a number
 * @n: the number to be factored
 * Return: factorial if n > 0 and -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}

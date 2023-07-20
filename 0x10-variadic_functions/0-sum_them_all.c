#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that sums all its parameter
 * @n: constant variable
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int index;
	va_list addlist;

	va_start(addlist, n);

	if (n == 0)
		return (0);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(addlist, unsigned int);
	}
	va_end(addlist);

	return (sum);
}

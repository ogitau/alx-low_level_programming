#include "variadic_functions.h"
#include <stdarg.h>
#include "stdio.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0 on success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list num;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && (index < (n - 1)))
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}

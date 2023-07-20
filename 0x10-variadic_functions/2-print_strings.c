#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between strings
 * @n: numbeer of strings passed to the function
 * Return: 0 on success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list str;
	char *t;

	va_start(str, n);

	for (index = 0; index < n; index++)
	{
		t = va_arg(str, char*);
		if (t)
		{
			printf("%s", t);
		}
		else
			printf("(nil)");
		if (separator != NULL && (index < (n - 1)))
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator - String to be printed between strings
 * @n: Number of strings to be passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list count;

	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(count, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(count);
}

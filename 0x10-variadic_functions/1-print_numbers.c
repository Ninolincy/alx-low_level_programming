#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integer passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list count;

	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(count, int));

		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(count);
}

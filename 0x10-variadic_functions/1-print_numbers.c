#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed
 * @n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n != 0)
	{
		va_list args;
		unsigned int i;

		va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		printf("%d", va_arg(args, int));
		va_end(args);
	}
	printf("\n");
}

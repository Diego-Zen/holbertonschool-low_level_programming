#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 *
 * @separator: string to be printed
 * @n: number of integers parameters
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n != 0)
	{
		va_list args;
		unsigned int i;

		va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%s%s", va_arg(args, char *), separator);
		}
		printf("%s\n", va_arg(args, char *));
		va_end(args);
	}
}

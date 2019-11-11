#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
	        printf("%i", n);
		for (i = n - 1; i >= 98; i--)
			printf(", %i", i);
	}
	else
	{
		printf("%i", n);
		for (i = n + 1; i <= 98; i++)
			printf(", %i", i);
	}
	printf("\n");
}

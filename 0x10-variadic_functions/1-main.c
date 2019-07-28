#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers("; ", 2, 0, 100);
	print_numbers("- ", 0);
	print_numbers(", ", 1, 100);
	print_numbers("", 1, 10);
	print_numbers(NULL, 2, 4, 10);
	return (0);
}

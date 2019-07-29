#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'H', 0, "lberton");
	print_all("sefs", "Hey", 123.3, "test");
	print_all(NULL, "Hey there");
	print_all("ABc", 'f');
	print_all("Afss", "testing", NULL);
	return (0);
}

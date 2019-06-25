#include "holberton.h"
/**
 * print_last_digit - Print last digit of a number
 * @n: an integer
 * Description: last digit
 * Return: integer
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = ((-1) * n) % 10;
		_putchar(last);
	}
	else
	{
		last = n % 0;
		_putchar(last);
	}
	return (last + '0');
}

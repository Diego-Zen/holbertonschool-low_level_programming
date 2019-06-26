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
		last = (n % 10) * -1;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}

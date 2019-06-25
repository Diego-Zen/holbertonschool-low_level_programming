#include "holberton.h"
/**
 * print_to_98 - print all natural numbers
 *
 * @n: number up to 98
 *
 * Return: integer
 */
int test(int);

void print_to_98(int n)
{

	int i;

	if (n < 98)
	{
		for (i = n; i == 98; i++)
		{
			test(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (i = n; i == 98; i--)
		{
			test(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		test(n);
	}

}

/**
 * test - Char
 * @n: integer
 * Return: integer
 */
int test(int n)
{

	int x;
	int y;

	x = n / 10;
	y = n % 10;
	_putchar(x);
	_putchar(y);
	return (_putchar(x));
}

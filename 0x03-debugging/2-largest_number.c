#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = bigger_number(a, bigger_number(b, c));
	return (largest);
}

/**
 * bigger_number - bigger number of two
 * @a: first integer
 * @b: second integer
 * Return: Bigger number
 */
int bigger_number(int a, int b)
{

	if (a > b)
		return (a);
	else
		return (b);
}

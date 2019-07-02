#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: Pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

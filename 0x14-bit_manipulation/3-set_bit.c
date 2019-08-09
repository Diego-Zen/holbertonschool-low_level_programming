#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: number
 * @index: position
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	num = num << index;
	*n = *n | num;
	return (1);
}

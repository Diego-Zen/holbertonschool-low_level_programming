#include "holberton.h"
/**
 * _isdigit - Checks for a digit 0 - 9
 *
 * Description: Check a digit
 * @c: number
 * Return: Integer
 *
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

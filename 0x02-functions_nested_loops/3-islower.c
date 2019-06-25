#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: a character
 * Description: Function that checks if a character is lowercase
 * Return: integer
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

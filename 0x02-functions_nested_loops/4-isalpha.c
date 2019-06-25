#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: a character
 * Description: Function that checks if a letter is lowercase or uppercase
 * Return: integer
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

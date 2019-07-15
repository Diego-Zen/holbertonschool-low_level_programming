#include <stdio.h>
#include "holberton.h"
/**
 * main - Prints the number of arguments
 *
 * @argc: integer count arguments
 * @argv: string vector arguments
 *
 * Return: Success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}

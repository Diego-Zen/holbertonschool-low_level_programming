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
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multiplies two numbers
 *
 * @argc: integer count arguments
 * @argv: string vector arguments
 *
 * Return: Success or Error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
				sum = sum + atoi(argv[i]);
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", argc - 1);
		return (0);
	}

}

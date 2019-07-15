#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multiply
 *
 * @argc: integer count arguments
 * @argv: string vector arguments
 *
 * Return: Success or Error
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum = 0;

	if (argc > 2)
	{
		for (i = 1; i < (unsigned int)argc; i++)
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
	else if (argc > 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}

}
